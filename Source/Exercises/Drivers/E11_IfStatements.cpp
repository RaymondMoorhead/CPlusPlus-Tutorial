#include <stdio.h>

const char* GetRelativity(int to_compare, int basis);

void Test(int x, int y)
{
  printf("%i is %s %i\n", x, GetRelativity(x, y), y);
}

int main(int argc, char** argv)
{
  Test(1, 2);
  Test(-2, 0);
  Test(10, 10);
  Test(7, -2);
  Test(12, -12);
    
  return 0;
}