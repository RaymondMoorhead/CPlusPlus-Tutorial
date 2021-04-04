/*
    There are many instaces in which you write a function
  or class which is forced to use a specific type due to
  the strictness of C++, but could in theory use any type.
  'Template functions' and 'template classes' solve this
  problem by skirting around it (see first NOTE at end).
*/

// declare temporary/placeholder type names to be used in the
// function, 'T' is a common one
template <typename T>
T Add(T a, T b)
{
  return a + b;
}

#include <stdio.h>

int main(int argc, char** argv)
{
  // and when using the function, declare what the type 'T' is
  // with angle brackets as part of the function call
  printf("Add<int>(5, 4) = %i\n",         Add<int>(5, 4));
  printf("Add<float>(9.1f, 7.4f) = %f\n", Add<float>(9.1f, 7.4f));
  
  return 0;
}

/*
  NOTE:   Template functions and classes don't really accept
        any type in their parameters, that goes against the
        language. Instead an instance of the function is generated
        for each type used with it.
        
  NOTE:   A compilation quirk of template functions and classes is that
        their implementation MUST be alongside their declaration. We haven't
        yet covered the separation of code into '.h' header files and '.cpp'
        implementation files, but templates will be a glaring exception to
        the rule when we do. It changes nothing now...but it will in the future.
*/