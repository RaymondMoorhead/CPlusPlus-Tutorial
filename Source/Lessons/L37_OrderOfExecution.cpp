/*
    In Lesson 00 I said, "In the beginning, there was main," this is a half-truth.
  Before 'main' runs, global variables must be intialized, and using constructors
  and assignment from functions you can actually run code before main. This is not
  something that should be casually done, as global variables and objects haven't
  been created yet- but it does have a purpose in the world of programming. The
  reasons are usually very specific, such as running a series of 'Unit Tests'
  before the primary code runs (we'll cover that in a future lesson).
*/

#include <iostream>

struct MyStruct
{
  MyStruct()
  {
    std::cout << "We're in MyStruct's Constructor\n";
  }
  
  ~MyStruct()
  {
    std::cout << "We're in MyStruct's Destructor\n";
  }
};

MyStruct my_struct;

int main(int argc, char** argv)
{
  std::cout << "We're in main\n";
}