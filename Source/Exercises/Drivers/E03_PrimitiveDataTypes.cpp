extern int my_integer;
extern float my_float;
extern double my_double;
extern bool my_bool;
extern char my_char;

#include <stdio.h>

int main(int argc, char** argv)
{
  int errors = 0;;
  if(my_integer)
  {
    printf("my_integer is %i, not %i\n", my_integer, 0);
    ++errors;
  }
  if(my_float < -0.000001f || my_float > 0.000001f)
  {
    printf("my_float is %f, not %f\n", my_float, 0.000000f);
    ++errors;
  }
  if(my_double < -0.000001 || my_double > 0.000001)
  {
    printf("my_double is %d, not %d\n", my_double, 0.000000);
    ++errors;
  }
  if(my_bool)
  {
    printf("my_bool is true, not false\n");
    ++errors;
  }
  if(my_char)
  {
    printf("my_char is %c, not %c\n", my_char, 0);
    ++errors;
  }
  
  if(errors)
    printf("There were %i variables with incorrect assignments\n", errors);
  else
    printf("All variables are present and assigned correctly\n");
  
  return 0;
}