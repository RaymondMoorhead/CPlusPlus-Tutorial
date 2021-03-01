/*
    A 'string' is essentially an array of characters. In C++ the only
  difference between a 'C-style string' and an array of characters is
  that it will always end with a 'null terminator'. The null terminator
  is the way we can tell that we've reached the end of the string and
  should stop. This is necessary because strings are arrays, arrays are
  pointers, and pointers only know the address and not the number of
  elements after it. If we continued beyond our string or array, we
  would enter invalid memory and the operating system would end the
  program to prevent us from damaging anything.
*/

#include <iostream>

int main(int argc, char** argv)
{
  // NOTE:    Strings created via the double-quotes method,
  //        such as the one below, are always 'const' and
  //        thus cannot be changed.
  const char* my_string = "Hello World";
  
  // This still works
  std::cout << "*(my_string + 0) = " << *(my_string + 0) << " = " << my_string + 0 << std::endl;
  std::cout << "*(my_string + 1) = " << *(my_string + 1) << " = " << my_string + 1 << std::endl;
  std::cout << "*(my_string + 2) = " << *(my_string + 2) << " = " << my_string + 2 << std::endl;
  std::cout << "*(my_string + 3) = " << *(my_string + 3) << " = " << my_string + 3 << std::endl;
  std::cout << "*(my_string + 4) = " << *(my_string + 4) << " = " << my_string + 4 << std::endl;
  
  // And this still works
  std::cout << "my_string[0] = " << my_string[0] << std::endl;
  std::cout << "my_string[1] = " << my_string[1] << std::endl;
  std::cout << "my_string[2] = " << my_string[2] << std::endl;
  std::cout << "my_string[3] = " << my_string[3] << std::endl;
  std::cout << "my_string[4] = " << my_string[4] << std::endl;
  
  // And here let's demonstrate the null terminator in action by adding
  // another one in the middle. Cout doesn't know there's more in the
  // string, it simply has to stop at the null terminator.
  std::cout << "The string is \"Hello Wonderful \\0World\": " << "Hello Wonderful \0World" << std::endl;
  
  return 0;
}

/*
  NOTE:   All functions which print out character pointers assume that
        they are actually a string, and will continue moving through
        their elements until a null terminator is reached. This is why
        the null terminator was added at the end of the character array
        in the previous lesson, and why 'my_char_array + X' printed out
        all the characters after the adjusted start location.
*/