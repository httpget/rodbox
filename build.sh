echo replacing __MAIN_SCRIPT
node safe.js
echo compiling
g++ ./tmp/modified.cpp -o ./bin/rodbox -llua5.3 -I/usr/include/lua5.3
# rm -rf ./tmp/modified.cpp