/*
    There are many ways to get input from the console,
  here we'll go over some of the ways using functions
  from C.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
  // 'getchar' will get the next character in the
  // console's input
  int i;
  printf("Type something: ");
  i = getchar();
  printf("\tYou typed: ");
  while(i != '\n')
  {
    putchar(i); // prints a single character
    i = getchar();
  }
  
  // 'scanf' allows you to specify what the data should
  // be, and returns the number of filled variables. If
  // the user inputs more characters into a pointer/array
  // than it has space for, bad stuff will happen
  char str[20];
  printf( "\nEnter a name and number: ");
  scanf("%s %i", str, &i);
  printf("\tYou typed: %s %i\n", str, i);
  
  return 0;
}

/*
  NOTE:   For this example to function properly, it was
        necessary to continually use 'getchar' until all
        the data had been retrieved (which due to the
        nature of console input mens the last character
        is always a '\n'). This is because if anything
        is in the console's buffer, 'gets' will immediately
        read it in up to the first '\n'. Try this yourself,
        replace the looping getchar/putchar with a single
        getchar/putchar.
*/