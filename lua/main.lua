function string.split(a,b)if b==nil then b="%s"end;local c={}for d in string.gmatch(a,"([^"..b.."]+)")do table.insert(c,d)end;return c end
function string.startsWith(a,b)return(a:sub(1,#b)==b);end
local function toString(...)local a={...}local b=""local function c(d,e,f)if e==nil then return"nil"end;if d>10 then return tostring(e)elseif type(e)=="table"then local g=(f and""or string.rep(" ",(d-1)*4)).."{"for h,i in pairs(e)do g=g.."\n"..string.rep(" ",d*4)..tostring(h).." = "..c(d+1,i,true)..","end;return g.."\n"..string.rep(" ",(d-1)*4).."}"elseif type(e)=="function"then return tostring(e)else return tostring(e)end end;for j,e in ipairs(a)do b=b..c(1,e)..", "end;b=b:gsub(", $","")return b end

local function split_with_comma(str) -- special case
    local fields = {}
    for field in str:gmatch('([^,]+)') do
        fields[#fields+1] = field
    end
    return fields
end

local function readDirectory(dir)
    dir = dir:gsub("%s", "\\%0") -- escape whitespace
    dir = dir:gsub("[%(%)]", "\\%0") -- escape brackets
    local ls = assert(io.popen("ls -lA " .. tostring(dir) .. " 2> /dev/null", "r"), "failed to io.popen ls")
    local files = ls:read("*a"):split("\n")
    ls:close()

    local result = {}

    for k,v in next, files do
        local str = v:gsub("%s+", " ")
        
        str:gsub("%d+:%d+ [%S%s]+", function(path)
            path = path:sub(7)
            if path:find("%-%>") then
                path = path:split(" -> ")[1]
            end

            result[#result+1] = path
        end)
    end

    return result
end

local function fileExists(file)
    return readDirectory(file)[1] and true or false
end

local function getVersion()
    local vh = assert(io.popen("curl -s https://setup.rbxcdn.com/versionQTStudio"), "failed to get studio version")
    local version = vh:read("*a")
    vh:close()

    return version
end

local function writeFile(dir, data, t)
    t = t or "w+"
    local file = assert(io.open(dir, t), "failed to open file " .. dir)
    file:write(data)
    file:close()
end

local function readFile(dir, t)
    t = t or "r"
    local file = assert(io.open(dir, t), "failed to open file " .. dir)
    local data = file:read("*a")
    file:close()

    return data
end

local rodboxVersion = "0.0.1"

if arg[1] == "--help" then
    print([[rodbox (]] .. rodboxVersion ..  [[) is a cli for launching roblox studio on linux (with modifications)
usage: StudioPrefix=(/home/.../.local/share/grapejuice/prefixes/studio)/(studio) rodbox [options]

options:
  --help                        shows this message
  --fflags                      define fflags,                            --fflags FFlagSimEnableDynamicMesh:true,DFIntUserHttpRequestsPerMinute:500
  --studio-args                 launch studio with specified arguments,   --studio-args "-task EditPlace -placeId 1818"
  --internal                    launch studio with internal permissions,  --internal
  --spoof-version               spoof studio's version,                   --spoof-version 0.583.2.5831071

  other:
    --verbose                   enables info prints,                      --verbose]])
    return
end

local verbose = false

for k,v in next, arg do
    if v == "--verbose" then
        verbose = true
    end
end

local _print = print
print = function(...) if verbose then _print(...) end end
warn = function(msg)
    _print("\x1b[1;33m[WARNING]: " .. tostring(msg) .. "\x1b[0m")
end
err = function(msg)
    _print("\x1b[1;31m[ERROR]: " .. tostring(msg) .. "\x1b[0m")
end

local settings = {
    fflags = {},
    patches = {},
    studioArgs = "",
    studioVersion = "0.0.0.0"
}

local home = os.getenv("HOME")

local studioPrefix = os.getenv("StudioPrefix")
local studioVersion = getVersion()

if studioPrefix == nil then
    err("StudioPrefix is undefined! defaulting to studio")
    studioPrefix = "studio"
end
if studioPrefix:gsub("%w+", "") == "" then
    print("setting StudioPrefix to " .. home .. "/.local/share/grapejuice/prefixes/" .. studioPrefix )
    studioPrefix = home .. "/.local/share/grapejuice/prefixes/" .. studioPrefix
end

local versionsPath = studioPrefix .. "/drive_c/Program Files (x86)/Roblox/Versions/"
local studioPath = versionsPath .. studioVersion
local executablePath = studioPath .. "/RobloxStudioBeta.exe"

if not fileExists(studioPath) then
    err("failed to find the studio folder! searching for it...")
end

for k,v in next, readDirectory(versionsPath) do
    if #readDirectory(versionsPath .. v) > 70 then
        print("found installed studio version", v)
        studioPath = versionsPath .. v
        executablePath = studioPath .. "/RobloxStudioBeta.exe"
        break
    end
end

local robloxStudio = readFile(executablePath, "rb")
local sv
robloxStudio:gsub("%d%.%d+%.%d+%.%d+", function(str)
    local x, y, z, w = table.unpack(str:split("."))
    
    if w:startsWith(y) and w ~= y then
        settings.studioVersion = str
        sv = str
    end

    return str
end)

local pos = 0
while true do
    pos = pos + 1

    if pos > #arg then
        break
    end

    local key, value = arg[pos], arg[pos+1]

    if key == "--fflags" then
        if not value then
            err("invalid value passed to --fflags")
            return
        end

        pos = pos + 1

        local flags = split_with_comma(value)

        for k, v in next, flags do
            local key, val = v:split(":")[1], v:split(":")[2]

            if key:startsWith("FFlag") then
                if val == "true" then
                    val = true
                else
                    val = false
                end
            elseif key:startsWith("DFInt") then
                val = tonumber(val) or 0
            end

            settings.fflags[key] = val
        end
    elseif key == "--spoof-version" then
        settings.patch = true
        settings.patches.spoofVersion = true
        settings.studioVersion = value
        pos = pos + 1
    elseif key == "--studio-args" then
        settings.studioArgs = value
        pos = pos + 1
    elseif key == "--internal" then
        settings.patches.internal = true
        settings.patch = true
    elseif key == "--verbose" then
    else
        err("unrecognized option " .. tostring(key))
    end
end

print("settings = " .. toString(settings))

local fflagsJson = "{"

local i = 0
for k,v in next, settings.fflags do
    i = i + 1
    fflagsJson = fflagsJson .. "\"" .. k .. "\":"

    if type(v) == "number" or type(v) == "boolean" then
        fflagsJson = fflagsJson .. tostring(v)
    else
        fflagsJson = fflagsJson .. "\"" .. tostring(v) .. "\""
    end

    if i ~= #settings.fflags then
        fflagsJson = fflagsJson .. ","
    end
end

fflagsJson = (fflagsJson ~= "{" and fflagsJson:sub(1,#fflagsJson-1) or "{") .. "}"

if settings.patch then
    --local robloxStudio = readFile(executablePath, "rb")

    if settings.patches.internal then
        local patched = false

        robloxStudio = robloxStudio:gsub("\x83\xCB\x04\x89\x5E\x64", function() -- https://github.com/vdsk/rbxstudiopatcher/blob/main/main.cpp
            patched = true
            return "\x83\xCB\x05\x89\x5E\x64"
        end)

        if not patched then
            err("failed to patch studio and enable internal mode! i suggest dming wyatt")
        end
    end

    if settings.patches.spoofVersion then
        local patched = false

        robloxStudio = robloxStudio:gsub(sv, function()
            local newVersion = settings.studioVersion:sub(1,#sv)

            patched = true
            return newVersion .. string.rep("\0", #sv - #newVersion)
        end)

        if not patched then
            err("failed to patch studio's version!")
        end
    end

    writeFile(studioPath .. "/RobloxStudioBeta.RB.exe", robloxStudio, "w+")
    executablePath = studioPath .. "/RobloxStudioBeta.RB.exe"
end

writeFile(studioPath .. "/ClientSettings/ClientAppSettings.json", fflagsJson)
print("launching studio")

io.popen("WINEPREFIX=\"" .. studioPrefix .. "\" wine \"" .. executablePath .. "\" " .. settings.studioArgs .. " 2> /dev/null 1> /dev/null &")
