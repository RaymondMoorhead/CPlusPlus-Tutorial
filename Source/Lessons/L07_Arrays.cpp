/*
    An 'array' is a consecutive series of elements of the same type
  within memory. In this sense an array is a pointer, but a pointer
  is not necessarily an array.
  
  let us use the pipe symbol '|' to represent a pointer which is
  looking at the element immediately following it.
  
  So a pointer is: |H
  And an array is: |Hello World
  
  The only difference is the number of valid memory addresses after it.
  You can only move the pointer by adding to it:
  
  *(pointer + 0) = H = |Hello World
  *(pointer + 1) = e = H|ello World
  *(pointer + 2) = l = He|llo World
  *(pointer + 3) = l = Hel|lo World
  *(pointer + 4) = o = Hell|o World
*/

#include <iostream>

int main(int argc, char** argv)
{
  // the '\0' at the end is a 'null terminator', we'll talk about it
  // later when we discuss what a 'string' is
  char my_char_array[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
  
  std::cout << "*(my_char_array + 0) = " << *(my_char_array + 0) << " = " << my_char_array + 0 << std::endl;
  std::cout << "*(my_char_array + 1) = " << *(my_char_array + 1) << " = " << my_char_array + 1 << std::endl;
  std::cout << "*(my_char_array + 2) = " << *(my_char_array + 2) << " = " << my_char_array + 2 << std::endl;
  std::cout << "*(my_char_array + 3) = " << *(my_char_array + 3) << " = " << my_char_array + 3 << std::endl;
  std::cout << "*(my_char_array + 4) = " << *(my_char_array + 4) << " = " << my_char_array + 4 << std::endl;
  
  // you can also access the consecutive elements of an array using
  // 'my_char_array[0]' instead of '*(my_char_array + 0)'
  
  std::cout << "my_char_array[0] = " << my_char_array[0] << std::endl;
  std::cout << "my_char_array[1] = " << my_char_array[1] << std::endl;
  std::cout << "my_char_array[2] = " << my_char_array[2] << std::endl;
  std::cout << "my_char_array[3] = " << my_char_array[3] << std::endl;
  std::cout << "my_char_array[4] = " << my_char_array[4] << std::endl;
  
  return 0;
}

/*
  NOTE:   The size of an array must be known at compile time, you can
        specificy the size within the square brackets (ie:
        'char my_char_array[12];') or assign all the elements at creation
        time within curly braces, as we did above. There are ways around
        this, which we'll discuss when we talk about memory management.
*/