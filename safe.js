// i cannot be bothered to write this in bash
const fs = require("fs")
fs.writeFileSync("./tmp/modified.cpp", fs.readFileSync("./main.cpp").toString().replace(/\_\_MAIN\_SCRIPT/gm, fs.readFileSync("./lua/main.lua").toString().replace(/[\S\s]/gm, (char) => "\\x" + char.charCodeAt(0).toString("16"))))