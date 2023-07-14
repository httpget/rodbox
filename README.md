# rodbox
roblox studio launcher for linux (with modifications)
having `lua5.3` and `grapejuice` installed is the only requirement
```rodbox (0.0.1) is a cli for launching roblox studio on linux (with modifications)
usage: StudioPrefix=(/home/.../.local/share/grapejuice/prefixes/studio)/(studio) rodbox [options]

options:
  --help                        shows this message
  --fflags                      define fflags,                            --fflags FFlagSimEnableDynamicMesh:true,DFIntUserHttpRequestsPerMinute:500
  --studio-args                 launch studio with specified arguments,   --studio-args "-task EditPlace -placeId 1818"
  --internal                    launch studio with internal permissions,  --internal
  --disable-identity-checks     disable identity checks,                  --disable-identity-checks (this is insecure as it disables it for any scripts ran)
  --spoof-version               spoof studio's version,                   --spoof-version 0.583.2.5831071

  other:
    --verbose                   enables info prints,                      --verbose```
