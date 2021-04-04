/*
    'Lambda Expressions' are anonymous functions, usually created
  at the same place they're invoked. They're usually just a few
  lines long, and contain the logic necessary for an algorithm to
  act upon data in an unsual way.
  
  For example:
    -I have a list of positive and negative integers
    -I wish to sort them in order of absolute value
    -std::sort doesn't know how to do this
    -I create a small function which tells it how, in the
     form of a Lambda Expression
    
    
  The (simplifed) format for Lambda Expressions is as follows:
    [capture clause](parameters)
    {
      function statements
    }
    
  Where the terms mean:
    capture clause      = A list of local variables used in the function 
                          statements (we don't use it in this lesson).
    parameters          = The arguments, just like in functions.
    function statements = Statements like those within a function: creating
                          variables, calling other functions, returning a
                          value, etc.
*/

#include <algorithm>  // sort
#include <stdlib.h>   // abs

void AbsSort(int* data, unsigned size)
{
  std::sort(data, data + size,
    // lambda expression starts here...
    [](int a, int b)
    {
      return abs(a) < abs(b);
    }
    // ... and ends here
  );
}

#include <stdio.h>

int main(int argc, char** argv)
{
  const unsigned size = 9;
  int data[size] = {10, 6, -1, 3, -3, -4, -8, 2, 0};
  
  printf("Our data starts as:");
  for(unsigned i = 0; i < size; ++i)
    printf(" %i", data[i]);
  printf("\n");
  
  AbsSort(data, size);
  
  printf("Our data ends as:");
  for(unsigned i = 0; i < size; ++i)
    printf(" %i", data[i]);
  printf("\n");
  
  return 0;
}

/*
  NOTE:   Lambda Expressions weren't originally in C++, and were
        added as part of the revision known as 'C++11' in 2011.
*/