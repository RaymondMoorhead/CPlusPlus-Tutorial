/*
    'std::string' is not *technically* part of the STL, but
  it's grouped with STL structures, and its behavior is nearly
  identical to a vector of characters.
  
    'std::string' is the C++ way to handle strings, it is robust
  and easily handles string manipulation operations. It does however,
  use up more memory (minimum of 24 bytes, compared to minimum 4 bytes),
  and may be overkill for your needs.
*/

#include <iostream>
#include <string>

// the size and expense of copying strings means
// that using a reference here is preferable
void Print(const std::string& my_string)
{
  std::cout << "my_string = " << my_string << std::endl;
}

int main(int argc, char** argv)
{
  std::string my_string = "Hello World";
  
  Print(my_string);
  
  // shorten it to 5 characters
  my_string.resize(5);
  
  Print(my_string);
  
  // append data to the string
  my_string += " George";
  
  Print(my_string);
  
  return 0;
}

/*
  NOTE:   Other common functions include the following:
  
        c_str         = Get the string as a 'const char*' complete with
                        null terminator
        substr        = Get a specified section of the string, a 'sub string'
        find          = Get the location of the first occurrence of a 'sub
                        string', or a single character
        find_first_of = Get the location of the first occurrence of any of
                        the characters provided
                        
  NOTE:   Another memory related reason to use c-style strings instead of c++
        strings is because of the 'string pool'. When you compile a program,
        every instance of a double-quotes string ("c_string_here") will be
        added to the 'string pool'. In this way, if there are duplicates of
        any string, they will point to the same address. This is also why
        double-quotes strings are always constant, changing it could incidentally
        modify other parts of your program.
*/
