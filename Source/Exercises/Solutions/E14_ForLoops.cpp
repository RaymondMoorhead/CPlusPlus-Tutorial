// Finish the function below, which calculates
// the result of 'base^power' using a for loop.
//
// Math Refresher:
//    'base^power' is 'base' multipled by itself
//    'power' number of times. so '2^3' is '2*2*2'

unsigned PowWithFor(unsigned base, unsigned power)
{
  unsigned result = 1;
  
  for(unsigned i = 0; i < power; ++i)
    result *= base;
  
  return result;
}