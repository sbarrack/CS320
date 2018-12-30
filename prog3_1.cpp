#include <stdio.h>
#include "lua.hpp"

int main(int argc, char *argv[]) {
  printf("Assignment #3-1, Stephen Barrack\n");
  lua_State *L = luaL_newstate();
  luaL_openlibs(L);
  luaL_dofile(L, argv[1]);
  lua_close(L);

  return 0;
}
