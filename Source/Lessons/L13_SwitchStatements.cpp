/*
    'Switch' statements are an alternative to 'if' statements,
  they are very similar to a series of 'if, else if, else if...'
  checks- but have two primary differences. They can only check
  if two values are equivalent, and unless a 'break' statement
  is added they'll keep going (even through the code of other
  cases).
*/

#include <stdio.h>

int main(int argc, char** argv)
{
  int my_int = 5;
  
  switch(my_int)
  {
    case 3:
    case 4:
      printf("my_int is %i, we're in case 4\n", my_int);
      break;
    case 5:
    case 6:
      printf("my_int is %i, we're in case 6\n", my_int);
    default:
      printf("we're in the default case\n");
      break;
  }
  
  return 0;
}

/*
  NOTE:   As stated in lesson 1, 'printf' means 'print formatted'.
        It can print any primitive data type if its details are
        given in the string using '%' and an appropriate code.
        Please see this page for more information about the codes
        you can use to print various types, as well as the other
        formatting tricks you can do:
          http://www.cplusplus.com/reference/cstdio/printf/
*/