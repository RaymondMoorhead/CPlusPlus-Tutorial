#include <stdio.h>

namespace favorites
{
  const char* FavoriteName();
}



int main(int argc, char** argv)
{
  printf("My favorite name is %s\n", favorites::FavoriteName());
  
  return 0;
}