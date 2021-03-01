/*
    Functions are named blocks of code that may take in any number
  of inputs, or 'arguments' as they're called, and may return some
  kind of result. In cases where there is no return or input data,
  use the term 'void'.
  
    Functions are necessary in C++, as they are the only way to ensure
  the order of operations. Other languages such as Javascript or Python
  start running code from the start of a file, but C++ must start in the
  'main' function.
*/

#include <iostream>

void SayHello(void)
{
  std::cout << "Hello" << std::endl;
}

int Add(int x, int y)
{
  return x + y;
}

float Multiply(float x, float y)
{
  return x * y;
}

int DoMath(int x, int y, int z, int w)
{
  // functions can call other functions, and the return
  // value of one function can be directly used in another-
  // as long as the returned type is appropriate
  return Add(Add(x, y), z) - w;
}

int main(int argc, char** argv)
{
  std::cout << "SayHello: ";
  SayHello();
  
  std::cout << "Add(1, 2): " << Add(1, 2) << std::endl;
  
  std::cout << "Multiply(1.5f, 2.0f): " << Multiply(1.5f, 2.0f) << std::endl;
  
  std::cout << "DoMath(1, 2, 3, 4): " << DoMath(1, 2, 3, 4) << std::endl;
  
  return 0;
}

// NOTE:  If the input argument for a function is void, you can ommit it
//      in the function's declaration.