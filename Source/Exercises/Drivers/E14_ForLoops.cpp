#include <stdio.h>
#include <math.h>

unsigned PowWithFor(unsigned base, unsigned power);

void Test(unsigned base, unsigned power)
{
  unsigned true_result = pow(base, power);
  unsigned our_result = PowWithFor(base, power);
    
  if(true_result == our_result)
    printf("SUCCESS with %u^%u=%u\n", base, power, true_result);
  else
    printf("FAILED with %u^%u=%u, your result was %u\n", base, power, true_result, our_result);
}

int main(int argc, char** argv)
{
  Test(2, 2);
  Test(10, 2);
  Test(2, 3);
  Test(3, 2);
  Test(5, 0);
  
  return 0;
}