/*
    The preprocessor is one of the most powerful aspects
  of C and C++. It runs before any code is compiled, and
  is effectively a fancy find-and-replace tool. You don't
  need to know much about it to write code (and it can in
  fact be dangerous to use), but it can do amazing things
  if used correctly.
  
    All preprocessor commands start with '#'. We've already
  seen 'include', which replaces the '#include' line with
  the entire contents of the given file.
*/

// 'include' replaces the line with the file specified
#include <stdio.h>

// 'define' creates macros, we can specify for all occurrences
// of a given identifier to be replaced with something else

// replace 'PI' with '3.14159f'
#define PI 3.14259f

// create a float named my_pi
#define MAKE_PI float my_pi


int main(int argc, char** argv)
{
  MAKE_PI = PI;
  printf("my_pi is %f\n", my_pi);
}