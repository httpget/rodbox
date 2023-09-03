#include <lua5.3/lua.hpp>
#include "iostream"
// hi marduk

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

    int r = luaL_dostring(L, "__MAIN_SCRIPT");

    if(r == LUA_OK){
        // printf("successfully ran the lua script\n");
    }else{
        printf(lua_tostring(L, -1));
    }

    return 0;
}

// i refuse to do this in c++
