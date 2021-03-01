/*
    You can have your code do different things based on
  whatever condition you desire. Here we'll cover ways
  in which you can do this with 'if' statements.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
  int my_int = 5;
  
  // for a list of comparison and logical operators, see the
  // 'NOTE' blocks after main, or see 'Help/Operators.h'
  
  // you can do something 'if' a condition is true,
  // executing the statement after the 'if()'
  if(my_int >= 5)
    printf("my_int is greater than or equal to 5\n");
    
  // you can do something 'if' its true...
  if(my_int < 5)
    printf("my_int is less than 5\n");
  // ...'else' do something different
  else
    printf("my_int is not less than 5\n");
    
  // you set a condition ahead of time and use it
  bool my_condition = my_int == 5;
  
  // NOTE: '==' will compare things, while '=' sets them
  
  // you can add curly braces to execute many lines of
  // code instead of just the next one
  if(!my_condition)
  {
    printf("my_condition is false");
    printf("\n");
  }
  // you can also add other 'if' statements to check, if
  // the prior one(s) failed ('!=' means 'not equal to)
  else if((my_int < 0) && (my_int != -23))
  {
    printf("my_condition is true and my_int is negative- but not -23");
    printf("\n");
  }
  
  return 0;
}

/*
  NOTE:   Strictly speaking, 'if' doesn't check to see
        if something is true, it is checking to see if
        any of the bits are set to 1. This means that
        all non-zero integers, floats, pointers, etc.
        will be treated as true. So the following are
        all true:
          if(51)
          if(-3)
          if(&my_int)
          
  NOTE:   When comparing two pieces of data, these are
        the 'relational and comparison operators':
          ==  equivalent (same value)
          !=  not equal to
          >   greater than
          <   less than
          >=  greater than or equal to
          <=  less than or equal to
          
  NOTE:   When combining tests/conditions, these are the
        'logical operators':
          &&  logical AND (both conditions are true)
          ||  logical OR (either condition is true)
          !   logical NOT (inverses, changes true to false and false to true)
*/