/*
    'For' loops are just like 'while' loops, except that
  they include a statement to be executed before the first
  loop (which can include a variable used only in the loop),
  and a statement to be executed at the end of each loop.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
  // print every power of two from 1 to 10,000,000
  int cur_value = 1;
  int limit = 10000000;
  
  // create loop_count at the start, increment it after each
  // iteration, and check the condition to see if we continue
  for(int loop_count = 0; cur_value < limit; ++loop_count)
  {
    printf("cur_value is %i, which is 2^%i\n", cur_value, loop_count);
    cur_value *= 2;
  }
  
  // you can also leave the sections empty if desired
  return 0;
}

/*
  NOTE: To visualize 'for' loop behavior, take this template:
  
          for(start_statement; condition; end_statement)
            loop_content
          
        ...and apply it as follows:
        
          {
            start_statement
            while(condition)
            {
              loop_content
              end_statement
            }
          }
*/