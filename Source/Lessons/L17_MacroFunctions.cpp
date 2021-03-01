/*
    You can also write functions in the preprocessor,
  kind of. They aren't actually functions, but rather
  macros which can be supplied additional data for
  use in the replacement process. They DO NOT CARE
  ABOUT TYPE, which is where many errors come from.
*/

#include <stdio.h>

// this macro adds X and Y
#define ADD(X, Y) X + Y

// you can also write macros over multiple lines
// if you add a '\' character at the end
#define DO_X_FOR_Y_LOOPS(X, Y)  \
  for(int i = 0; i < Y; ++i)    \
    X;


int main(int argc, char** argv)
{
  int data = 0;
  DO_X_FOR_Y_LOOPS(data += ADD(1, 0), 10);
  printf("data is %d\n", data);
  return 0;
}

/*
  NOTE:   The line above is expanded as follows:
          
            DO_X_FOR_Y_LOOPS(data += ADD(1, 0), 10);
            
            for(int i = 0; i < 10; ++i)
              data += ADD(1, 0);;
              
            for(int i = 0; i < 10; ++i)
              data += 1 + 0;;
*/