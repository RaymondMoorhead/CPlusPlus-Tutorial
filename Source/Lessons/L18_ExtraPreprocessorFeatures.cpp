/*
    There are some special features built into the
  preprocessor which can prove quite useful. We'll
  go over several of them
*/

#include <stdio.h>

// using two '#' will fix two separate items together
// into a single identifier
#define CONCATENATE(X, Y) X ## Y

// using one '#' before an input will convert it into
// a c-style string
#define STRINGEFY(X) #X

// __FILE__ is replaced in the preprocessor with the filename it occurs in
// __LINE__ is replaced in the preprocessor with the line it occurs on
#define PRINT(X) printf("We're in %s line %i, the message is: %s\n", __FILE__, __LINE__, X)


int main(int argc, char** argv)
{
  // here we call the 'printf' function by piecing it together
  CONCATENATE(pri, ntf)("Hello Concatenate\n");
  
  // here we turn some input into a string
  printf(STRINGEFY(Hello Stringefy\n));
  
  // here we use our PRINT macro function, with its
  // automatic filename and line number output
  PRINT("Hello");
  return 0;
}

/*
  NOTE:   You can add macros in the command to compile
        your code. In the case of g++ it is '-D'.
        
          Additionally, Visual Studio will automatically
        define '_DEBUG' when in debug mode, and '_NDEBUG'
        when in release mode.
        
  NOTE:   As a reminder, all preprocessor code, as hinted
        by the name, runs before any processing of the
        code itself. It can only operate on elements known
        before compilation.
*/