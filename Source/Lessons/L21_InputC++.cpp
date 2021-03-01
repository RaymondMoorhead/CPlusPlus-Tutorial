/*
    Here are some ways to get console input using
  C++. We'll also introduce a useful class called
  'string', which is often referred to as a 'C++
  style string'. What is a class? We'll cover that
  later, for now just think of it as many variables
  and functions referred through a single variable.
*/

#include <iostream>
#include <string>   // has 'std::string' and 'getline'
#include <sstream>  // has 'std::stringstream'

int main(int argc, char** argv)
{
  // first of all, you can store an input into a variable
  int num;
  std::cout << "Please type a number: ";
  std::cin >> num;
  std::cout << "You typed: " << num << std::endl;
  
  // secondly, you can use 'getline' to store it in a string
  std::string str;
  std::cout << "Please type a name: ";
  getline(std::cin, str);
  std::cout << "You typed: " << str << std::endl;
  
  // thirdly, you can use a 'stringstream' to convert a string
  // into another data type
  std::cout << "Please type a number: ";
  getline(std::cin, str);
  std::stringstream(str) >> num;
  std::cout << "You typed: " << num << std::endl;
  
  return 0;
}

/*
  NOTE:   It is useful to put data into a string instead
        of immediately storing it in it's final container
        (int, float, etc.), because it gives you a chance
        to 'sanitize' the data. If you ask for a number and
        someone types 'foo', you need to be able to prevent
        that from breaking your code.
        
  NOTE:   A C++ style string can be thought of as an
        automatically resizing array of characters, so it's
        pretty safe for input operations.
*/