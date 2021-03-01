/* 
  This is a C++ style 'Hello World' program.
    
  NOTE:   The name 'C++' is actually a programming
        in-joke. The '++' operator increments a
        number, so 'C++' is 'C + 1'.
*/

#include <iostream> // has the 'cout' and 'endl' objects

int main(int argc, char** argv)
{
  std::cout << "Hello World" << std::endl;
  return 0;
}

/*
    Instead of using functions, this variation of 'Hello World'
  uses a C++ concept called 'Operator Overloading' so that the
  '<<' operator can be used to funnel data into the 'cout' object,
  which stands for 'Console Output'. The 'endl' at the end stands
  for 'End Line', it is effectively the same as a '\n' character-
  but is better practice because it can be replaced in the background
  by the most appropriate character codes for the architecture your
  code is compiled for.
  
    As for the 'std::' before the 'cout' object, that is a
  'namespace' access. We're saying that we want to use 'cout' in the
  namespace 'std'. We'll cover them more in a later lesson.
*/