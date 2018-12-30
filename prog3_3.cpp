#include <stdio.h>
#include "lua.hpp"

int main(int argc, char *argv[]) {
  char buff[256];

  printf("Assignment #3-3, Stephen Barrack\n");
  lua_State *L = luaL_newstate();
  luaL_openlibs(L);
  luaL_dofile(L, argv[1]);
  fgets(buff, sizeof(buff), stdin);
  luaL_loadfile(L, "prog3_2.lua");
  lua_pcall(L, 0, 0, 0);
  lua_getglobal(L, "InfixToPostfix");
  lua_pushstring(L, buff);
  lua_pcall(L, 1, 1, 0);
  const char *str = lua_tostring(L, -1);
  printf("%s", str);
  lua_pop(L, 1);
  lua_close(L);
  
  return 0;
}
