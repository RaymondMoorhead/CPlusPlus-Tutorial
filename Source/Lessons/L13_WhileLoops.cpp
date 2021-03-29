/*
    'While' loops are a way to have code repeat until
  some condition has been met. Loops are very important
  in code because they mean you don't need to manually
  access or modify the individual elements of structures.
  Imagine writing the code to modify an array of 10,000
  elements line by line, loops prevent that.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
  // print every power of two from 1 to 10,000,000
  int cur_value = 1;
  int loop_count = 0;
  int limit = 10000000;
  
  // while this condition is true, do the code in the block
  while(cur_value < limit)
  {
    printf("cur_value is %i, which is 2^%i\n", cur_value, loop_count);
    cur_value *= 2;
    ++loop_count;
  }
  
  // you can also use a 'do while' loop, which executes its
  // block once before checking the condition
  limit = 10;
  cur_value = -limit;
  do
  {
    cur_value -= limit;
    printf("cur_value - %i is %i\n", limit, cur_value);
  } while(cur_value > limit); // this will never be true
  
  return 0;
}