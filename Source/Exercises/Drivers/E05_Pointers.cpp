extern int* my_int_pointer;
extern int** my_int_pointer_pointer;
extern int*** my_int_pointer_pointer_pointer;

#include <stdio.h>

int main(int argc, char** argv)
{
  int errors = 0;;
  if(my_int_pointer)
  {
    printf("my_int_pointer is %p, not nullptr\n", my_int_pointer);
    ++errors;
  }
  if(my_int_pointer_pointer != &my_int_pointer)
  {
    printf("my_int_pointer_pointer is %p, not %p (&my_int_pointer)\n", my_int_pointer_pointer, &my_int_pointer);
    ++errors;
  }
  if(my_int_pointer_pointer_pointer != &my_int_pointer_pointer)
  {
    printf("my_int_pointer_pointer_pointer is %p, not %p (&my_int_pointer_pointer)\n", my_int_pointer_pointer_pointer, &my_int_pointer_pointer);
    ++errors;
  }
  
  if(errors)
    printf("There were %i variables with incorrect assignments\n", errors);
  else
    printf("All variables are present and assigned correctly\n");
  
  return 0;
}