#include <stdio.h>

const char* GetLimitedSign(int x);

void Test(int x)
{
  printf("%i is %s\n", x, GetLimitedSign(x));
}

int main(int argc, char** argv)
{
  Test(-3);
  Test(-1);
  Test(0);
  Test(1);
  Test(3);
  Test(527);
  Test(-3000);
  
  return 0;
}