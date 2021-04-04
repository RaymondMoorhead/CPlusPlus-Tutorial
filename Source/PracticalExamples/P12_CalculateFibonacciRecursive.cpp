/*
    The Fibonacci sequence is a useful array of numbers which,
  among other things, can be used to approximate the golden
  ratio. Using functions and if statements you can create a
  'recursive function' which calls itself over and over until
  the task is complete.
  
  NOTE:   Recursive functions can be dangerous. Every time a
        function is called, it and its variables are pushed
        onto the 'stack'. The space on the stack is not
        unlimited (though it is very large), and when you surpass
        it you generate a 'stack overflow' error and your
        program will crash.
*/

#include <stdio.h>

int Fibonacci(int iteration)
{
  if(iteration <= 1)
    return iteration;
  else
    return Fibonacci(iteration - 1) + Fibonacci(iteration - 2);
}

int main(int argc, char** argv)
{
  printf("Fibonacci(5) = %i\n", Fibonacci(5));
  printf("Fibonacci(25) = %i\n", Fibonacci(25));
  printf("Fibonacci(30) = %i\n", Fibonacci(30));
  
  return 0;
}

/*
  NOTE:   This is a relatively slow way to calculate the Fibonacci
        sequence, but it does demonstrate what one can accomplish
        with just functions and if statements. As we add more tools
        to our belt, better and better solutions will become available.
*/