#include <lua5.3/lua.hpp>
#include "iostream"

int main(int argc, char** argv) {
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    lua_newtable(L);
    for(int i = 0; i < argc; i++) {
        lua_pushinteger(L, i);
        lua_pushstring(L, argv[i]);
        lua_settable(L, -3);
    }
    lua_setglobal(L, "arg");

    int r = luaL_dostring(L, "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x61\x2c\x62\x29\x69\x66\x20\x62\x3d\x3d\x6e\x69\x6c\x20\x74\x68\x65\x6e\x20\x62\x3d\x22\x25\x73\x22\x65\x6e\x64\x3b\x6c\x6f\x63\x61\x6c\x20\x63\x3d\x7b\x7d\x66\x6f\x72\x20\x64\x20\x69\x6e\x20\x73\x74\x72\x69\x6e\x67\x2e\x67\x6d\x61\x74\x63\x68\x28\x61\x2c\x22\x28\x5b\x5e\x22\x2e\x2e\x62\x2e\x2e\x22\x5d\x2b\x29\x22\x29\x64\x6f\x20\x74\x61\x62\x6c\x65\x2e\x69\x6e\x73\x65\x72\x74\x28\x63\x2c\x64\x29\x65\x6e\x64\x3b\x72\x65\x74\x75\x72\x6e\x20\x63\x20\x65\x6e\x64\xa\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x74\x72\x69\x6e\x67\x2e\x73\x74\x61\x72\x74\x73\x57\x69\x74\x68\x28\x61\x2c\x62\x29\x72\x65\x74\x75\x72\x6e\x28\x61\x3a\x73\x75\x62\x28\x31\x2c\x23\x62\x29\x3d\x3d\x62\x29\x3b\x65\x6e\x64\xa\x6c\x6f\x63\x61\x6c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x74\x6f\x53\x74\x72\x69\x6e\x67\x28\x2e\x2e\x2e\x29\x6c\x6f\x63\x61\x6c\x20\x61\x3d\x7b\x2e\x2e\x2e\x7d\x6c\x6f\x63\x61\x6c\x20\x62\x3d\x22\x22\x6c\x6f\x63\x61\x6c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x63\x28\x64\x2c\x65\x2c\x66\x29\x69\x66\x20\x65\x3d\x3d\x6e\x69\x6c\x20\x74\x68\x65\x6e\x20\x72\x65\x74\x75\x72\x6e\x22\x6e\x69\x6c\x22\x65\x6e\x64\x3b\x69\x66\x20\x64\x3e\x31\x30\x20\x74\x68\x65\x6e\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x6f\x73\x74\x72\x69\x6e\x67\x28\x65\x29\x65\x6c\x73\x65\x69\x66\x20\x74\x79\x70\x65\x28\x65\x29\x3d\x3d\x22\x74\x61\x62\x6c\x65\x22\x74\x68\x65\x6e\x20\x6c\x6f\x63\x61\x6c\x20\x67\x3d\x28\x66\x20\x61\x6e\x64\x22\x22\x6f\x72\x20\x73\x74\x72\x69\x6e\x67\x2e\x72\x65\x70\x28\x22\x20\x22\x2c\x28\x64\x2d\x31\x29\x2a\x34\x29\x29\x2e\x2e\x22\x7b\x22\x66\x6f\x72\x20\x68\x2c\x69\x20\x69\x6e\x20\x70\x61\x69\x72\x73\x28\x65\x29\x64\x6f\x20\x67\x3d\x67\x2e\x2e\x22\x5c\x6e\x22\x2e\x2e\x73\x74\x72\x69\x6e\x67\x2e\x72\x65\x70\x28\x22\x20\x22\x2c\x64\x2a\x34\x29\x2e\x2e\x74\x6f\x73\x74\x72\x69\x6e\x67\x28\x68\x29\x2e\x2e\x22\x20\x3d\x20\x22\x2e\x2e\x63\x28\x64\x2b\x31\x2c\x69\x2c\x74\x72\x75\x65\x29\x2e\x2e\x22\x2c\x22\x65\x6e\x64\x3b\x72\x65\x74\x75\x72\x6e\x20\x67\x2e\x2e\x22\x5c\x6e\x22\x2e\x2e\x73\x74\x72\x69\x6e\x67\x2e\x72\x65\x70\x28\x22\x20\x22\x2c\x28\x64\x2d\x31\x29\x2a\x34\x29\x2e\x2e\x22\x7d\x22\x65\x6c\x73\x65\x69\x66\x20\x74\x79\x70\x65\x28\x65\x29\x3d\x3d\x22\x66\x75\x6e\x63\x74\x69\x6f\x6e\x22\x74\x68\x65\x6e\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x6f\x73\x74\x72\x69\x6e\x67\x28\x65\x29\x65\x6c\x73\x65\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x6f\x73\x74\x72\x69\x6e\x67\x28\x65\x29\x65\x6e\x64\x20\x65\x6e\x64\x3b\x66\x6f\x72\x20\x6a\x2c\x65\x20\x69\x6e\x20\x69\x70\x61\x69\x72\x73\x28\x61\x29\x64\x6f\x20\x62\x3d\x62\x2e\x2e\x63\x28\x31\x2c\x65\x29\x2e\x2e\x22\x2c\x20\x22\x65\x6e\x64\x3b\x62\x3d\x62\x3a\x67\x73\x75\x62\x28\x22\x2c\x20\x24\x22\x2c\x22\x22\x29\x72\x65\x74\x75\x72\x6e\x20\x62\x20\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x73\x70\x6c\x69\x74\x5f\x77\x69\x74\x68\x5f\x63\x6f\x6d\x6d\x61\x28\x73\x74\x72\x29\x20\x2d\x2d\x20\x73\x70\x65\x63\x69\x61\x6c\x20\x63\x61\x73\x65\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x66\x69\x65\x6c\x64\x73\x20\x3d\x20\x7b\x7d\xa\x20\x20\x20\x20\x66\x6f\x72\x20\x66\x69\x65\x6c\x64\x20\x69\x6e\x20\x73\x74\x72\x3a\x67\x6d\x61\x74\x63\x68\x28\x27\x28\x5b\x5e\x2c\x5d\x2b\x29\x27\x29\x20\x64\x6f\xa\x20\x20\x20\x20\x20\x20\x20\x20\x66\x69\x65\x6c\x64\x73\x5b\x23\x66\x69\x65\x6c\x64\x73\x2b\x31\x5d\x20\x3d\x20\x66\x69\x65\x6c\x64\xa\x20\x20\x20\x20\x65\x6e\x64\xa\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\x20\x66\x69\x65\x6c\x64\x73\xa\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x72\x65\x61\x64\x44\x69\x72\x65\x63\x74\x6f\x72\x79\x28\x64\x69\x72\x29\xa\x20\x20\x20\x20\x64\x69\x72\x20\x3d\x20\x64\x69\x72\x3a\x67\x73\x75\x62\x28\x22\x25\x73\x22\x2c\x20\x22\x5c\x5c\x25\x30\x22\x29\x20\x2d\x2d\x20\x65\x73\x63\x61\x70\x65\x20\x77\x68\x69\x74\x65\x73\x70\x61\x63\x65\xa\x20\x20\x20\x20\x64\x69\x72\x20\x3d\x20\x64\x69\x72\x3a\x67\x73\x75\x62\x28\x22\x5b\x25\x28\x25\x29\x5d\x22\x2c\x20\x22\x5c\x5c\x25\x30\x22\x29\x20\x2d\x2d\x20\x65\x73\x63\x61\x70\x65\x20\x62\x72\x61\x63\x6b\x65\x74\x73\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x6c\x73\x20\x3d\x20\x61\x73\x73\x65\x72\x74\x28\x69\x6f\x2e\x70\x6f\x70\x65\x6e\x28\x22\x6c\x73\x20\x2d\x6c\x41\x20\x22\x20\x2e\x2e\x20\x74\x6f\x73\x74\x72\x69\x6e\x67\x28\x64\x69\x72\x29\x20\x2e\x2e\x20\x22\x20\x32\x3e\x20\x2f\x64\x65\x76\x2f\x6e\x75\x6c\x6c\x22\x2c\x20\x22\x72\x22\x29\x2c\x20\x22\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x69\x6f\x2e\x70\x6f\x70\x65\x6e\x20\x6c\x73\x22\x29\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x66\x69\x6c\x65\x73\x20\x3d\x20\x6c\x73\x3a\x72\x65\x61\x64\x28\x22\x2a\x61\x22\x29\x3a\x73\x70\x6c\x69\x74\x28\x22\x5c\x6e\x22\x29\xa\x20\x20\x20\x20\x6c\x73\x3a\x63\x6c\x6f\x73\x65\x28\x29\xa\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20\x7b\x7d\xa\xa\x20\x20\x20\x20\x66\x6f\x72\x20\x6b\x2c\x76\x20\x69\x6e\x20\x6e\x65\x78\x74\x2c\x20\x66\x69\x6c\x65\x73\x20\x64\x6f\xa\x20\x20\x20\x20\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x73\x74\x72\x20\x3d\x20\x76\x3a\x67\x73\x75\x62\x28\x22\x25\x73\x2b\x22\x2c\x20\x22\x20\x22\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x74\x72\x3a\x67\x73\x75\x62\x28\x22\x25\x64\x2b\x3a\x25\x64\x2b\x20\x5b\x25\x53\x25\x73\x5d\x2b\x22\x2c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x70\x61\x74\x68\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x70\x61\x74\x68\x20\x3d\x20\x70\x61\x74\x68\x3a\x73\x75\x62\x28\x37\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x69\x66\x20\x70\x61\x74\x68\x3a\x66\x69\x6e\x64\x28\x22\x25\x2d\x25\x3e\x22\x29\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x70\x61\x74\x68\x20\x3d\x20\x70\x61\x74\x68\x3a\x73\x70\x6c\x69\x74\x28\x22\x20\x2d\x3e\x20\x22\x29\x5b\x31\x5d\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x72\x65\x73\x75\x6c\x74\x5b\x23\x72\x65\x73\x75\x6c\x74\x2b\x31\x5d\x20\x3d\x20\x70\x61\x74\x68\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\x29\xa\x20\x20\x20\x20\x65\x6e\x64\xa\xa\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\x20\x72\x65\x73\x75\x6c\x74\xa\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x69\x6c\x65\x45\x78\x69\x73\x74\x73\x28\x66\x69\x6c\x65\x29\xa\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\x20\x72\x65\x61\x64\x44\x69\x72\x65\x63\x74\x6f\x72\x79\x28\x66\x69\x6c\x65\x29\x5b\x31\x5d\x20\x61\x6e\x64\x20\x74\x72\x75\x65\x20\x6f\x72\x20\x66\x61\x6c\x73\x65\xa\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x67\x65\x74\x56\x65\x72\x73\x69\x6f\x6e\x28\x29\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x76\x68\x20\x3d\x20\x61\x73\x73\x65\x72\x74\x28\x69\x6f\x2e\x70\x6f\x70\x65\x6e\x28\x22\x63\x75\x72\x6c\x20\x2d\x73\x20\x68\x74\x74\x70\x73\x3a\x2f\x2f\x73\x65\x74\x75\x70\x2e\x72\x62\x78\x63\x64\x6e\x2e\x63\x6f\x6d\x2f\x76\x65\x72\x73\x69\x6f\x6e\x51\x54\x53\x74\x75\x64\x69\x6f\x22\x29\x2c\x20\x22\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x67\x65\x74\x20\x73\x74\x75\x64\x69\x6f\x20\x76\x65\x72\x73\x69\x6f\x6e\x22\x29\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x76\x65\x72\x73\x69\x6f\x6e\x20\x3d\x20\x76\x68\x3a\x72\x65\x61\x64\x28\x22\x2a\x61\x22\x29\xa\x20\x20\x20\x20\x76\x68\x3a\x63\x6c\x6f\x73\x65\x28\x29\xa\xa\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x65\x72\x73\x69\x6f\x6e\xa\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x77\x72\x69\x74\x65\x46\x69\x6c\x65\x28\x64\x69\x72\x2c\x20\x64\x61\x74\x61\x2c\x20\x74\x29\xa\x20\x20\x20\x20\x74\x20\x3d\x20\x74\x20\x6f\x72\x20\x22\x77\x2b\x22\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x66\x69\x6c\x65\x20\x3d\x20\x61\x73\x73\x65\x72\x74\x28\x69\x6f\x2e\x6f\x70\x65\x6e\x28\x64\x69\x72\x2c\x20\x74\x29\x2c\x20\x22\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x6f\x70\x65\x6e\x20\x66\x69\x6c\x65\x20\x22\x20\x2e\x2e\x20\x64\x69\x72\x29\xa\x20\x20\x20\x20\x66\x69\x6c\x65\x3a\x77\x72\x69\x74\x65\x28\x64\x61\x74\x61\x29\xa\x20\x20\x20\x20\x66\x69\x6c\x65\x3a\x63\x6c\x6f\x73\x65\x28\x29\xa\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x72\x65\x61\x64\x46\x69\x6c\x65\x28\x64\x69\x72\x2c\x20\x74\x29\xa\x20\x20\x20\x20\x74\x20\x3d\x20\x74\x20\x6f\x72\x20\x22\x72\x22\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x66\x69\x6c\x65\x20\x3d\x20\x61\x73\x73\x65\x72\x74\x28\x69\x6f\x2e\x6f\x70\x65\x6e\x28\x64\x69\x72\x2c\x20\x74\x29\x2c\x20\x22\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x6f\x70\x65\x6e\x20\x66\x69\x6c\x65\x20\x22\x20\x2e\x2e\x20\x64\x69\x72\x29\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x64\x61\x74\x61\x20\x3d\x20\x66\x69\x6c\x65\x3a\x72\x65\x61\x64\x28\x22\x2a\x61\x22\x29\xa\x20\x20\x20\x20\x66\x69\x6c\x65\x3a\x63\x6c\x6f\x73\x65\x28\x29\xa\xa\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\x20\x64\x61\x74\x61\xa\x65\x6e\x64\xa\xa\x69\x66\x20\x61\x72\x67\x5b\x31\x5d\x20\x3d\x3d\x20\x22\x2d\x2d\x68\x65\x6c\x70\x22\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x70\x72\x69\x6e\x74\x28\x5b\x5b\x72\x6f\x64\x62\x6f\x78\x20\x69\x73\x20\x61\x20\x63\x6c\x69\x20\x66\x6f\x72\x20\x6c\x61\x75\x6e\x63\x68\x69\x6e\x67\x20\x72\x6f\x62\x6c\x6f\x78\x20\x73\x74\x75\x64\x69\x6f\x20\x6f\x6e\x20\x6c\x69\x6e\x75\x78\x20\x28\x77\x69\x74\x68\x20\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x73\x29\xa\x75\x73\x61\x67\x65\x3a\x20\x53\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x3d\x28\x2f\x68\x6f\x6d\x65\x2f\x2e\x2e\x2e\x2f\x2e\x6c\x6f\x63\x61\x6c\x2f\x73\x68\x61\x72\x65\x2f\x67\x72\x61\x70\x65\x6a\x75\x69\x63\x65\x2f\x70\x72\x65\x66\x69\x78\x65\x73\x2f\x73\x74\x75\x64\x69\x6f\x29\x2f\x28\x73\x74\x75\x64\x69\x6f\x29\x20\x72\x6f\x64\x62\x6f\x78\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\xa\xa\x6f\x70\x74\x69\x6f\x6e\x73\x3a\xa\x20\x20\x2d\x2d\x68\x65\x6c\x70\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x73\x68\x6f\x77\x73\x20\x74\x68\x69\x73\x20\x6d\x65\x73\x73\x61\x67\x65\xa\x20\x20\x2d\x2d\x66\x66\x6c\x61\x67\x73\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x64\x65\x66\x69\x6e\x65\x20\x66\x66\x6c\x61\x67\x73\x2c\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x2d\x2d\x66\x66\x6c\x61\x67\x73\x20\x46\x46\x6c\x61\x67\x53\x69\x6d\x45\x6e\x61\x62\x6c\x65\x44\x79\x6e\x61\x6d\x69\x63\x4d\x65\x73\x68\x3a\x74\x72\x75\x65\x2c\x44\x46\x49\x6e\x74\x55\x73\x65\x72\x48\x74\x74\x70\x52\x65\x71\x75\x65\x73\x74\x73\x50\x65\x72\x4d\x69\x6e\x75\x74\x65\x3a\x35\x30\x30\xa\x20\x20\x2d\x2d\x73\x74\x75\x64\x69\x6f\x2d\x61\x72\x67\x73\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x6c\x61\x75\x6e\x63\x68\x20\x73\x74\x75\x64\x69\x6f\x20\x77\x69\x74\x68\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x2c\x20\x20\x20\x2d\x2d\x73\x74\x75\x64\x69\x6f\x2d\x61\x72\x67\x73\x20\x22\x2d\x74\x61\x73\x6b\x20\x45\x64\x69\x74\x50\x6c\x61\x63\x65\x20\x2d\x70\x6c\x61\x63\x65\x49\x64\x20\x31\x38\x31\x38\x22\xa\x20\x20\x2d\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x6c\x61\x75\x6e\x63\x68\x20\x73\x74\x75\x64\x69\x6f\x20\x77\x69\x74\x68\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x70\x65\x72\x6d\x69\x73\x73\x69\x6f\x6e\x73\x2c\x20\x20\x2d\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\xa\x20\x20\x2d\x2d\x64\x69\x73\x61\x62\x6c\x65\x2d\x69\x64\x65\x6e\x74\x69\x74\x79\x2d\x63\x68\x65\x63\x6b\x73\x20\x20\x20\x20\x20\x64\x69\x73\x61\x62\x6c\x65\x20\x69\x64\x65\x6e\x74\x69\x74\x79\x20\x63\x68\x65\x63\x6b\x73\x2c\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x2d\x2d\x64\x69\x73\x61\x62\x6c\x65\x2d\x69\x64\x65\x6e\x74\x69\x74\x79\x2d\x63\x68\x65\x63\x6b\x73\x20\x28\x74\x68\x69\x73\x20\x69\x73\x20\x69\x6e\x73\x65\x63\x75\x72\x65\x20\x61\x73\x20\x69\x74\x20\x64\x69\x73\x61\x62\x6c\x65\x73\x20\x69\x74\x20\x66\x6f\x72\x20\x61\x6e\x79\x20\x73\x63\x72\x69\x70\x74\x73\x20\x72\x61\x6e\x29\xa\x20\x20\x2d\x2d\x76\x65\x72\x62\x6f\x73\x65\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x61\x62\x6c\x65\x73\x20\x69\x6e\x66\x6f\x20\x70\x72\x69\x6e\x74\x73\x2c\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x2d\x2d\x76\x65\x72\x62\x6f\x73\x65\x5d\x5d\x29\xa\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\xa\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x76\x65\x72\x62\x6f\x73\x65\x20\x3d\x20\x66\x61\x6c\x73\x65\xa\xa\x66\x6f\x72\x20\x6b\x2c\x76\x20\x69\x6e\x20\x6e\x65\x78\x74\x2c\x20\x61\x72\x67\x20\x64\x6f\x20\x69\x66\x20\x76\x20\x3d\x3d\x20\x22\x2d\x2d\x76\x65\x72\x62\x6f\x73\x65\x22\x20\x74\x68\x65\x6e\x20\x76\x65\x72\x62\x6f\x73\x65\x20\x3d\x20\x74\x72\x75\x65\x20\x65\x6e\x64\x20\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x5f\x70\x72\x69\x6e\x74\x20\x3d\x20\x70\x72\x69\x6e\x74\xa\x70\x72\x69\x6e\x74\x20\x3d\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x2e\x2e\x2e\x29\x20\x69\x66\x20\x76\x65\x72\x62\x6f\x73\x65\x20\x74\x68\x65\x6e\x20\x5f\x70\x72\x69\x6e\x74\x28\x2e\x2e\x2e\x29\x20\x65\x6e\x64\x20\x65\x6e\x64\xa\x77\x61\x72\x6e\x20\x3d\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x6d\x73\x67\x29\xa\x20\x20\x20\x20\x5f\x70\x72\x69\x6e\x74\x28\x22\x5c\x78\x31\x62\x5b\x31\x3b\x33\x33\x6d\x5b\x57\x41\x52\x4e\x49\x4e\x47\x5d\x3a\x20\x22\x20\x2e\x2e\x20\x74\x6f\x73\x74\x72\x69\x6e\x67\x28\x6d\x73\x67\x29\x20\x2e\x2e\x20\x22\x5c\x78\x31\x62\x5b\x30\x6d\x22\x29\xa\x65\x6e\x64\xa\x65\x72\x72\x20\x3d\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x6d\x73\x67\x29\xa\x20\x20\x20\x20\x5f\x70\x72\x69\x6e\x74\x28\x22\x5c\x78\x31\x62\x5b\x31\x3b\x33\x31\x6d\x5b\x45\x52\x52\x4f\x52\x5d\x3a\x20\x22\x20\x2e\x2e\x20\x74\x6f\x73\x74\x72\x69\x6e\x67\x28\x6d\x73\x67\x29\x20\x2e\x2e\x20\x22\x5c\x78\x31\x62\x5b\x30\x6d\x22\x29\xa\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x20\x3d\x20\x7b\xa\x20\x20\x20\x20\x66\x66\x6c\x61\x67\x73\x20\x3d\x20\x7b\x7d\x2c\xa\x20\x20\x20\x20\x70\x61\x74\x63\x68\x65\x73\x20\x3d\x20\x7b\x7d\x2c\xa\x20\x20\x20\x20\x73\x74\x75\x64\x69\x6f\x41\x72\x67\x73\x20\x3d\x20\x22\x22\x2c\xa\x20\x20\x20\x20\x73\x74\x75\x64\x69\x6f\x56\x65\x72\x73\x69\x6f\x6e\x20\x3d\x20\x22\x30\x2e\x30\x2e\x30\x2e\x30\x22\xa\x7d\xa\xa\x6c\x6f\x63\x61\x6c\x20\x68\x6f\x6d\x65\x20\x3d\x20\x6f\x73\x2e\x67\x65\x74\x65\x6e\x76\x28\x22\x48\x4f\x4d\x45\x22\x29\xa\xa\x6c\x6f\x63\x61\x6c\x20\x73\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x20\x3d\x20\x6f\x73\x2e\x67\x65\x74\x65\x6e\x76\x28\x22\x53\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x22\x29\xa\x6c\x6f\x63\x61\x6c\x20\x73\x74\x75\x64\x69\x6f\x56\x65\x72\x73\x69\x6f\x6e\x20\x3d\x20\x67\x65\x74\x56\x65\x72\x73\x69\x6f\x6e\x28\x29\xa\xa\x69\x66\x20\x73\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x20\x3d\x3d\x20\x6e\x69\x6c\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x65\x72\x72\x28\x22\x53\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x20\x69\x73\x20\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x22\x29\xa\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\xa\x65\x6c\x73\x65\xa\x20\x20\x20\x20\x69\x66\x20\x73\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x3a\x67\x73\x75\x62\x28\x22\x25\x77\x2b\x22\x2c\x20\x22\x22\x29\x20\x3d\x3d\x20\x22\x22\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x70\x72\x69\x6e\x74\x28\x22\x73\x65\x74\x74\x69\x6e\x67\x20\x53\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x20\x74\x6f\x20\x22\x20\x2e\x2e\x20\x68\x6f\x6d\x65\x20\x2e\x2e\x20\x22\x2f\x2e\x6c\x6f\x63\x61\x6c\x2f\x73\x68\x61\x72\x65\x2f\x67\x72\x61\x70\x65\x6a\x75\x69\x63\x65\x2f\x70\x72\x65\x66\x69\x78\x65\x73\x2f\x22\x20\x2e\x2e\x20\x73\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x20\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x20\x3d\x20\x68\x6f\x6d\x65\x20\x2e\x2e\x20\x22\x2f\x2e\x6c\x6f\x63\x61\x6c\x2f\x73\x68\x61\x72\x65\x2f\x67\x72\x61\x70\x65\x6a\x75\x69\x63\x65\x2f\x70\x72\x65\x66\x69\x78\x65\x73\x2f\x22\x20\x2e\x2e\x20\x73\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\xa\x20\x20\x20\x20\x65\x6e\x64\xa\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x76\x65\x72\x73\x69\x6f\x6e\x73\x50\x61\x74\x68\x20\x3d\x20\x73\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x20\x2e\x2e\x20\x22\x2f\x64\x72\x69\x76\x65\x5f\x63\x2f\x50\x72\x6f\x67\x72\x61\x6d\x20\x46\x69\x6c\x65\x73\x20\x28\x78\x38\x36\x29\x2f\x52\x6f\x62\x6c\x6f\x78\x2f\x56\x65\x72\x73\x69\x6f\x6e\x73\x2f\x22\xa\x6c\x6f\x63\x61\x6c\x20\x73\x74\x75\x64\x69\x6f\x50\x61\x74\x68\x20\x3d\x20\x76\x65\x72\x73\x69\x6f\x6e\x73\x50\x61\x74\x68\x20\x2e\x2e\x20\x73\x74\x75\x64\x69\x6f\x56\x65\x72\x73\x69\x6f\x6e\xa\x6c\x6f\x63\x61\x6c\x20\x65\x78\x65\x63\x75\x74\x61\x62\x6c\x65\x50\x61\x74\x68\x20\x3d\x20\x73\x74\x75\x64\x69\x6f\x50\x61\x74\x68\x20\x2e\x2e\x20\x22\x2f\x52\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x42\x65\x74\x61\x2e\x65\x78\x65\x22\xa\xa\x69\x66\x20\x6e\x6f\x74\x20\x66\x69\x6c\x65\x45\x78\x69\x73\x74\x73\x28\x73\x74\x75\x64\x69\x6f\x50\x61\x74\x68\x29\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x65\x72\x72\x28\x22\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x66\x69\x6e\x64\x20\x74\x68\x65\x20\x73\x74\x75\x64\x69\x6f\x20\x66\x6f\x6c\x64\x65\x72\x21\x20\x73\x65\x61\x72\x63\x68\x69\x6e\x67\x20\x66\x6f\x72\x20\x69\x74\x2e\x2e\x2e\x22\x29\xa\x65\x6e\x64\xa\xa\x66\x6f\x72\x20\x6b\x2c\x76\x20\x69\x6e\x20\x6e\x65\x78\x74\x2c\x20\x72\x65\x61\x64\x44\x69\x72\x65\x63\x74\x6f\x72\x79\x28\x76\x65\x72\x73\x69\x6f\x6e\x73\x50\x61\x74\x68\x29\x20\x64\x6f\xa\x20\x20\x20\x20\x69\x66\x20\x23\x72\x65\x61\x64\x44\x69\x72\x65\x63\x74\x6f\x72\x79\x28\x76\x65\x72\x73\x69\x6f\x6e\x73\x50\x61\x74\x68\x20\x2e\x2e\x20\x76\x29\x20\x3e\x20\x37\x30\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x70\x72\x69\x6e\x74\x28\x22\x66\x6f\x75\x6e\x64\x20\x69\x6e\x73\x74\x61\x6c\x6c\x65\x64\x20\x73\x74\x75\x64\x69\x6f\x20\x76\x65\x72\x73\x69\x6f\x6e\x22\x2c\x20\x76\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x74\x75\x64\x69\x6f\x50\x61\x74\x68\x20\x3d\x20\x76\x65\x72\x73\x69\x6f\x6e\x73\x50\x61\x74\x68\x20\x2e\x2e\x20\x76\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x78\x65\x63\x75\x74\x61\x62\x6c\x65\x50\x61\x74\x68\x20\x3d\x20\x73\x74\x75\x64\x69\x6f\x50\x61\x74\x68\x20\x2e\x2e\x20\x22\x2f\x52\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x42\x65\x74\x61\x2e\x65\x78\x65\x22\xa\x20\x20\x20\x20\x20\x20\x20\x20\x62\x72\x65\x61\x6b\xa\x20\x20\x20\x20\x65\x6e\x64\xa\x65\x6e\x64\xa\xa\x6c\x6f\x63\x61\x6c\x20\x72\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x20\x3d\x20\x72\x65\x61\x64\x46\x69\x6c\x65\x28\x65\x78\x65\x63\x75\x74\x61\x62\x6c\x65\x50\x61\x74\x68\x2c\x20\x22\x72\x62\x22\x29\xa\x6c\x6f\x63\x61\x6c\x20\x73\x76\xa\x72\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x3a\x67\x73\x75\x62\x28\x22\x25\x64\x25\x2e\x25\x64\x2b\x25\x2e\x25\x64\x2b\x25\x2e\x25\x64\x2b\x22\x2c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x73\x74\x72\x29\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x78\x2c\x20\x79\x2c\x20\x7a\x2c\x20\x77\x20\x3d\x20\x74\x61\x62\x6c\x65\x2e\x75\x6e\x70\x61\x63\x6b\x28\x73\x74\x72\x3a\x73\x70\x6c\x69\x74\x28\x22\x2e\x22\x29\x29\xa\x20\x20\x20\x20\xa\x20\x20\x20\x20\x69\x66\x20\x77\x3a\x73\x74\x61\x72\x74\x73\x57\x69\x74\x68\x28\x79\x29\x20\x61\x6e\x64\x20\x77\x20\x7e\x3d\x20\x79\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x73\x74\x75\x64\x69\x6f\x56\x65\x72\x73\x69\x6f\x6e\x20\x3d\x20\x73\x74\x72\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x76\x20\x3d\x20\x73\x74\x72\xa\x20\x20\x20\x20\x65\x6e\x64\xa\xa\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\x20\x73\x74\x72\xa\x65\x6e\x64\x29\xa\xa\x6c\x6f\x63\x61\x6c\x20\x70\x6f\x73\x20\x3d\x20\x30\xa\x77\x68\x69\x6c\x65\x20\x74\x72\x75\x65\x20\x64\x6f\xa\x20\x20\x20\x20\x70\x6f\x73\x20\x3d\x20\x70\x6f\x73\x20\x2b\x20\x31\xa\xa\x20\x20\x20\x20\x69\x66\x20\x70\x6f\x73\x20\x3e\x20\x23\x61\x72\x67\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x62\x72\x65\x61\x6b\xa\x20\x20\x20\x20\x65\x6e\x64\xa\xa\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x6b\x65\x79\x2c\x20\x76\x61\x6c\x75\x65\x20\x3d\x20\x61\x72\x67\x5b\x70\x6f\x73\x5d\x2c\x20\x61\x72\x67\x5b\x70\x6f\x73\x2b\x31\x5d\xa\xa\x20\x20\x20\x20\x69\x66\x20\x6b\x65\x79\x20\x3d\x3d\x20\x22\x2d\x2d\x66\x66\x6c\x61\x67\x73\x22\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x69\x66\x20\x6e\x6f\x74\x20\x76\x61\x6c\x75\x65\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x65\x72\x72\x28\x22\x69\x6e\x76\x61\x6c\x69\x64\x20\x76\x61\x6c\x75\x65\x20\x70\x61\x73\x73\x65\x64\x20\x74\x6f\x20\x2d\x2d\x66\x66\x6c\x61\x67\x73\x22\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x70\x6f\x73\x20\x3d\x20\x70\x6f\x73\x20\x2b\x20\x31\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x66\x6c\x61\x67\x73\x20\x3d\x20\x73\x70\x6c\x69\x74\x5f\x77\x69\x74\x68\x5f\x63\x6f\x6d\x6d\x61\x28\x76\x61\x6c\x75\x65\x29\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x66\x6f\x72\x20\x6b\x2c\x20\x76\x20\x69\x6e\x20\x6e\x65\x78\x74\x2c\x20\x66\x6c\x61\x67\x73\x20\x64\x6f\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x6b\x65\x79\x2c\x20\x76\x61\x6c\x20\x3d\x20\x76\x3a\x73\x70\x6c\x69\x74\x28\x22\x3a\x22\x29\x5b\x31\x5d\x2c\x20\x76\x3a\x73\x70\x6c\x69\x74\x28\x22\x3a\x22\x29\x5b\x32\x5d\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x69\x66\x20\x6b\x65\x79\x3a\x73\x74\x61\x72\x74\x73\x57\x69\x74\x68\x28\x22\x46\x46\x6c\x61\x67\x22\x29\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x69\x66\x20\x76\x61\x6c\x20\x3d\x3d\x20\x22\x74\x72\x75\x65\x22\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x76\x61\x6c\x20\x3d\x20\x74\x72\x75\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6c\x73\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x76\x61\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6c\x73\x65\x69\x66\x20\x6b\x65\x79\x3a\x73\x74\x61\x72\x74\x73\x57\x69\x74\x68\x28\x22\x44\x46\x49\x6e\x74\x22\x29\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x76\x61\x6c\x20\x3d\x20\x74\x6f\x6e\x75\x6d\x62\x65\x72\x28\x76\x61\x6c\x29\x20\x6f\x72\x20\x30\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x66\x66\x6c\x61\x67\x73\x5b\x6b\x65\x79\x5d\x20\x3d\x20\x76\x61\x6c\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\xa\x20\x20\x20\x20\x65\x6c\x73\x65\x69\x66\x20\x6b\x65\x79\x20\x3d\x3d\x20\x22\x2d\x2d\x73\x70\x6f\x6f\x66\x2d\x76\x65\x72\x73\x69\x6f\x6e\x22\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x70\x61\x74\x63\x68\x20\x3d\x20\x74\x72\x75\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x70\x61\x74\x63\x68\x65\x73\x2e\x73\x70\x6f\x6f\x66\x56\x65\x72\x73\x69\x6f\x6e\x20\x3d\x20\x74\x72\x75\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x73\x74\x75\x64\x69\x6f\x56\x65\x72\x73\x69\x6f\x6e\x20\x3d\x20\x76\x61\x6c\x75\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x70\x6f\x73\x20\x3d\x20\x70\x6f\x73\x20\x2b\x20\x31\xa\x20\x20\x20\x20\x65\x6c\x73\x65\x69\x66\x20\x6b\x65\x79\x20\x3d\x3d\x20\x22\x2d\x2d\x73\x74\x75\x64\x69\x6f\x2d\x61\x72\x67\x73\x22\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x73\x74\x75\x64\x69\x6f\x41\x72\x67\x73\x20\x3d\x20\x76\x61\x6c\x75\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x70\x6f\x73\x20\x3d\x20\x70\x6f\x73\x20\x2b\x20\x31\xa\x20\x20\x20\x20\x65\x6c\x73\x65\x69\x66\x20\x6b\x65\x79\x20\x3d\x3d\x20\x22\x2d\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x22\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x70\x61\x74\x63\x68\x65\x73\x2e\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x3d\x20\x74\x72\x75\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x70\x61\x74\x63\x68\x20\x3d\x20\x74\x72\x75\x65\xa\x20\x20\x20\x20\x65\x6c\x73\x65\x69\x66\x20\x6b\x65\x79\x20\x3d\x3d\x20\x22\x2d\x2d\x64\x69\x73\x61\x62\x6c\x65\x2d\x69\x64\x65\x6e\x74\x69\x74\x79\x2d\x63\x68\x65\x63\x6b\x73\x22\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x70\x61\x74\x63\x68\x65\x73\x2e\x64\x69\x73\x61\x62\x6c\x65\x49\x64\x65\x6e\x74\x69\x74\x79\x43\x68\x65\x63\x6b\x73\x20\x3d\x20\x74\x72\x75\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x70\x61\x74\x63\x68\x20\x3d\x20\x74\x72\x75\x65\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x77\x61\x72\x6e\x28\x22\x64\x69\x73\x61\x62\x6c\x69\x6e\x67\x20\x69\x64\x65\x6e\x74\x69\x74\x79\x20\x63\x68\x65\x63\x6b\x73\x20\x69\x73\x20\x69\x6e\x73\x65\x63\x75\x72\x65\x20\x61\x73\x20\x69\x74\x20\x64\x69\x73\x61\x62\x6c\x65\x73\x20\x69\x74\x20\x66\x6f\x72\x20\x61\x6e\x79\x20\x73\x63\x72\x69\x70\x74\x73\x20\x72\x61\x6e\x22\x29\xa\x20\x20\x20\x20\x65\x6c\x73\x65\x69\x66\x20\x6b\x65\x79\x20\x3d\x3d\x20\x22\x2d\x2d\x76\x65\x72\x62\x6f\x73\x65\x22\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x65\x6c\x73\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x72\x72\x28\x22\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x6f\x70\x74\x69\x6f\x6e\x20\x22\x20\x2e\x2e\x20\x74\x6f\x73\x74\x72\x69\x6e\x67\x28\x6b\x65\x79\x29\x29\xa\x20\x20\x20\x20\x65\x6e\x64\xa\x65\x6e\x64\xa\xa\x70\x72\x69\x6e\x74\x28\x22\x73\x65\x74\x74\x69\x6e\x67\x73\x20\x3d\x20\x22\x20\x2e\x2e\x20\x74\x6f\x53\x74\x72\x69\x6e\x67\x28\x73\x65\x74\x74\x69\x6e\x67\x73\x29\x29\xa\xa\x6c\x6f\x63\x61\x6c\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x3d\x20\x22\x7b\x22\xa\xa\x6c\x6f\x63\x61\x6c\x20\x69\x20\x3d\x20\x30\xa\x66\x6f\x72\x20\x6b\x2c\x76\x20\x69\x6e\x20\x6e\x65\x78\x74\x2c\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x66\x66\x6c\x61\x67\x73\x20\x64\x6f\xa\x20\x20\x20\x20\x69\x20\x3d\x20\x69\x20\x2b\x20\x31\xa\x20\x20\x20\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x3d\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x2e\x2e\x20\x22\x5c\x22\x22\x20\x2e\x2e\x20\x6b\x20\x2e\x2e\x20\x22\x5c\x22\x3a\x22\xa\xa\x20\x20\x20\x20\x69\x66\x20\x74\x79\x70\x65\x28\x76\x29\x20\x3d\x3d\x20\x22\x6e\x75\x6d\x62\x65\x72\x22\x20\x6f\x72\x20\x74\x79\x70\x65\x28\x76\x29\x20\x3d\x3d\x20\x22\x62\x6f\x6f\x6c\x65\x61\x6e\x22\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x3d\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x2e\x2e\x20\x74\x6f\x73\x74\x72\x69\x6e\x67\x28\x76\x29\xa\x20\x20\x20\x20\x65\x6c\x73\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x3d\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x2e\x2e\x20\x22\x5c\x22\x22\x20\x2e\x2e\x20\x74\x6f\x73\x74\x72\x69\x6e\x67\x28\x76\x29\x20\x2e\x2e\x20\x22\x5c\x22\x22\xa\x20\x20\x20\x20\x65\x6e\x64\xa\xa\x20\x20\x20\x20\x69\x66\x20\x69\x20\x7e\x3d\x20\x23\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x66\x66\x6c\x61\x67\x73\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x3d\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x2e\x2e\x20\x22\x2c\x22\xa\x20\x20\x20\x20\x65\x6e\x64\xa\x65\x6e\x64\xa\xa\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x3d\x20\x28\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x20\x7e\x3d\x20\x22\x7b\x22\x20\x61\x6e\x64\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x3a\x73\x75\x62\x28\x31\x2c\x23\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x2d\x31\x29\x20\x6f\x72\x20\x22\x7b\x22\x29\x20\x2e\x2e\x20\x22\x7d\x22\xa\xa\x69\x66\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x70\x61\x74\x63\x68\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x2d\x2d\x6c\x6f\x63\x61\x6c\x20\x72\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x20\x3d\x20\x72\x65\x61\x64\x46\x69\x6c\x65\x28\x65\x78\x65\x63\x75\x74\x61\x62\x6c\x65\x50\x61\x74\x68\x2c\x20\x22\x72\x62\x22\x29\xa\xa\x20\x20\x20\x20\x69\x66\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x70\x61\x74\x63\x68\x65\x73\x2e\x64\x69\x73\x61\x62\x6c\x65\x49\x64\x65\x6e\x74\x69\x74\x79\x43\x68\x65\x63\x6b\x73\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x70\x61\x74\x63\x68\x65\x64\x20\x3d\x20\x66\x61\x6c\x73\x65\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x72\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x20\x3d\x20\x72\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x3a\x67\x73\x75\x62\x28\x22\x5c\x78\x38\x35\x5c\x78\x44\x32\x5c\x78\x37\x34\x5c\x78\x34\x42\x5c\x78\x34\x38\x5c\x78\x36\x33\x22\x2c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x70\x61\x74\x63\x68\x65\x64\x20\x3d\x20\x74\x72\x75\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\x20\x22\x5c\x78\x42\x30\x5c\x78\x30\x31\x5c\x78\x43\x33\x5c\x78\x39\x30\x5c\x78\x39\x30\x5c\x78\x39\x30\x22\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\x29\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x69\x66\x20\x6e\x6f\x74\x20\x70\x61\x74\x63\x68\x65\x64\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x65\x72\x72\x28\x22\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x70\x61\x74\x63\x68\x20\x73\x74\x75\x64\x69\x6f\x20\x61\x6e\x64\x20\x64\x69\x73\x61\x62\x6c\x65\x20\x69\x64\x65\x6e\x74\x69\x74\x79\x20\x63\x68\x65\x63\x6b\x73\x21\x20\x69\x20\x73\x75\x67\x67\x65\x73\x74\x20\x64\x6d\x69\x6e\x67\x20\x77\x79\x61\x74\x74\x22\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\xa\x20\x20\x20\x20\x65\x6e\x64\xa\xa\x20\x20\x20\x20\x69\x66\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x70\x61\x74\x63\x68\x65\x73\x2e\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x70\x61\x74\x63\x68\x65\x64\x20\x3d\x20\x66\x61\x6c\x73\x65\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x72\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x20\x3d\x20\x72\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x3a\x67\x73\x75\x62\x28\x22\x5c\x78\x38\x33\x5c\x78\x43\x42\x5c\x78\x30\x34\x5c\x78\x38\x39\x5c\x78\x35\x45\x5c\x78\x36\x34\x22\x2c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x29\x20\x2d\x2d\x20\x68\x74\x74\x70\x73\x3a\x2f\x2f\x67\x69\x74\x68\x75\x62\x2e\x63\x6f\x6d\x2f\x76\x64\x73\x6b\x2f\x72\x62\x78\x73\x74\x75\x64\x69\x6f\x70\x61\x74\x63\x68\x65\x72\x2f\x62\x6c\x6f\x62\x2f\x6d\x61\x69\x6e\x2f\x6d\x61\x69\x6e\x2e\x63\x70\x70\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x70\x61\x74\x63\x68\x65\x64\x20\x3d\x20\x74\x72\x75\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\x20\x22\x5c\x78\x38\x33\x5c\x78\x43\x42\x5c\x78\x30\x35\x5c\x78\x38\x39\x5c\x78\x35\x45\x5c\x78\x36\x34\x22\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\x29\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x69\x66\x20\x6e\x6f\x74\x20\x70\x61\x74\x63\x68\x65\x64\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x65\x72\x72\x28\x22\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x70\x61\x74\x63\x68\x20\x73\x74\x75\x64\x69\x6f\x20\x61\x6e\x64\x20\x65\x6e\x61\x62\x6c\x65\x20\x69\x6e\x74\x65\x72\x6e\x61\x6c\x20\x6d\x6f\x64\x65\x21\x20\x69\x20\x73\x75\x67\x67\x65\x73\x74\x20\x64\x6d\x69\x6e\x67\x20\x77\x79\x61\x74\x74\x22\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\xa\x20\x20\x20\x20\x65\x6e\x64\xa\xa\x20\x20\x20\x20\x69\x66\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x70\x61\x74\x63\x68\x65\x73\x2e\x73\x70\x6f\x6f\x66\x56\x65\x72\x73\x69\x6f\x6e\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x70\x61\x74\x63\x68\x65\x64\x20\x3d\x20\x66\x61\x6c\x73\x65\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x72\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x20\x3d\x20\x72\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x3a\x67\x73\x75\x62\x28\x73\x76\x2c\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x28\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x6c\x6f\x63\x61\x6c\x20\x6e\x65\x77\x56\x65\x72\x73\x69\x6f\x6e\x20\x3d\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x73\x74\x75\x64\x69\x6f\x56\x65\x72\x73\x69\x6f\x6e\x3a\x73\x75\x62\x28\x31\x2c\x23\x73\x76\x29\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x70\x61\x74\x63\x68\x65\x64\x20\x3d\x20\x74\x72\x75\x65\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\x20\x6e\x65\x77\x56\x65\x72\x73\x69\x6f\x6e\x20\x2e\x2e\x20\x73\x74\x72\x69\x6e\x67\x2e\x72\x65\x70\x28\x22\x5c\x30\x22\x2c\x20\x23\x73\x76\x20\x2d\x20\x23\x6e\x65\x77\x56\x65\x72\x73\x69\x6f\x6e\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\x29\xa\xa\x20\x20\x20\x20\x20\x20\x20\x20\x69\x66\x20\x6e\x6f\x74\x20\x70\x61\x74\x63\x68\x65\x64\x20\x74\x68\x65\x6e\xa\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x65\x72\x72\x28\x22\x66\x61\x69\x6c\x65\x64\x20\x74\x6f\x20\x70\x61\x74\x63\x68\x20\x73\x74\x75\x64\x69\x6f\x27\x73\x20\x76\x65\x72\x73\x69\x6f\x6e\x21\x22\x29\xa\x20\x20\x20\x20\x20\x20\x20\x20\x65\x6e\x64\xa\x20\x20\x20\x20\x65\x6e\x64\xa\xa\x20\x20\x20\x20\x77\x72\x69\x74\x65\x46\x69\x6c\x65\x28\x73\x74\x75\x64\x69\x6f\x50\x61\x74\x68\x20\x2e\x2e\x20\x22\x2f\x52\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x42\x65\x74\x61\x2e\x52\x42\x2e\x65\x78\x65\x22\x2c\x20\x72\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x2c\x20\x22\x77\x2b\x22\x29\xa\x20\x20\x20\x20\x65\x78\x65\x63\x75\x74\x61\x62\x6c\x65\x50\x61\x74\x68\x20\x3d\x20\x73\x74\x75\x64\x69\x6f\x50\x61\x74\x68\x20\x2e\x2e\x20\x22\x2f\x52\x6f\x62\x6c\x6f\x78\x53\x74\x75\x64\x69\x6f\x42\x65\x74\x61\x2e\x52\x42\x2e\x65\x78\x65\x22\xa\x65\x6e\x64\xa\xa\x77\x72\x69\x74\x65\x46\x69\x6c\x65\x28\x73\x74\x75\x64\x69\x6f\x50\x61\x74\x68\x20\x2e\x2e\x20\x22\x2f\x43\x6c\x69\x65\x6e\x74\x53\x65\x74\x74\x69\x6e\x67\x73\x2f\x43\x6c\x69\x65\x6e\x74\x41\x70\x70\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x6a\x73\x6f\x6e\x22\x2c\x20\x66\x66\x6c\x61\x67\x73\x4a\x73\x6f\x6e\x29\xa\x70\x72\x69\x6e\x74\x28\x22\x6c\x61\x75\x6e\x63\x68\x69\x6e\x67\x20\x73\x74\x75\x64\x69\x6f\x22\x29\xa\xa\x69\x6f\x2e\x70\x6f\x70\x65\x6e\x28\x22\x57\x49\x4e\x45\x50\x52\x45\x46\x49\x58\x3d\x5c\x22\x22\x20\x2e\x2e\x20\x73\x74\x75\x64\x69\x6f\x50\x72\x65\x66\x69\x78\x20\x2e\x2e\x20\x22\x5c\x22\x20\x77\x69\x6e\x65\x20\x5c\x22\x22\x20\x2e\x2e\x20\x65\x78\x65\x63\x75\x74\x61\x62\x6c\x65\x50\x61\x74\x68\x20\x2e\x2e\x20\x22\x5c\x22\x20\x22\x20\x2e\x2e\x20\x73\x65\x74\x74\x69\x6e\x67\x73\x2e\x73\x74\x75\x64\x69\x6f\x41\x72\x67\x73\x20\x2e\x2e\x20\x22\x20\x32\x3e\x20\x2f\x64\x65\x76\x2f\x6e\x75\x6c\x6c\x20\x31\x3e\x20\x2f\x64\x65\x76\x2f\x6e\x75\x6c\x6c\x20\x26\x22\x29");

    if(r == LUA_OK){
        // printf("successfully ran the lua script\n");
    }else{
        printf(lua_tostring(L, -1));
    }

    return 0;
}

// i refuse to do this in c++