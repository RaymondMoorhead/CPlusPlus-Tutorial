// Finish the function below, which calculates
// the result of 'base^power' using a while loop.
//
// Math Refresher:
//    'base^power' is 'base' multipled by itself
//    'power' number of times. so '2^3' is '2*2*2'

unsigned PowWithWhile(unsigned base, unsigned power)
{
  unsigned result = 1;
  
  unsigned i = 0;
  while(i < power)
  {
    result *= base;
    ++i;
  }
  
  return result;
}