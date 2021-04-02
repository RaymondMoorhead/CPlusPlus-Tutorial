// Read in the arguments of your faux main function, they
// are integers in the form of c-strings. Research and use
// the function 'atoi' to convert them into integers, add
// them together, and return the result.
//
// NOTE:  If no arguments are provided to the application,
//        then the real main in 'Exercises/Drivers' will
//        provide arguments for testing. If you do provide
//        arguments, they will be directy passed to your 'Main'

#include <stdlib.h> // atoi

int Main(int argc, const char** argv)
{
  int result = 0;
  for(int i = 1; i < argc; ++i)
    result += atoi(argv[i]);
  return result;
}