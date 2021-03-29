#include <iostream>

// There is an expanded list of primitive types
// most are variations of the 'int' type

// 'enum' stands for 'enumeration', and is merely a collection
// of integer values with  names. The first value defaults to '0'
// and then increments with each subsequent one, but can be set
// at any point
enum MyEnumOfNames
{
  George,   // 0
  Anthony,  // 1
  Bob = 10, // 10
  Victor    // 11
};

int main(int argc, char** argv)
{
  // Here is a demonstration of enum values and how to access them
  std::cout << "The values of MyEnumOfNames are as follows: "         << std::endl;
  std::cout << "\tGeorge: "                 << George                 << std::endl;
  std::cout << "\tAnthony: "                << Anthony                << std::endl;
  std::cout << "\tBob: "                    << Bob                    << std::endl;
  std::cout << "\tMyEnumOfNames::Victor: "  << MyEnumOfNames::Victor  << std::endl;
  
  // NOTE: The variables below which are adjacent are identical in type
  
  // Here is the standard 'int', which we saw before
  int my_int;
  
  // You can change it to be unsigned, so it can't be negative
  unsigned my_unsigned;
  unsigned int my_unsigned_int;
  
  // You can decrease its memory size, which also reduces its maximum value
  short my_short;
  short int my_short_int;
  
  // You can increase its memory size to make its maximum value higher...
  long my_long;
  long int my_long_int;
  
  // ...and you can use long up to two times to make it very big
  long long my_long_long;
  long long int my_long_long_int;
  
  // You can combine these together
  unsigned short my_unsigned_short;
  unsigned short int my_unsigned_short_int;
  
  unsigned long my_unsigned_long;
  unsigned long int my_unsigned_long_int;
  
  unsigned long long my_unsigned_long_long;
  unsigned long long int my_unsigned_long_long_int;
  
  // You can also have an unsigned 'char', remember that a 'char'
  // is basically a code which is interpretted as a character
  unsigned char my_unsigned_char;
  
  /*
    NOTE:   You can assign negative values to unsigned data types, but it will likely
          loop around to the highest positive value. This is because if there isn't any
          kind of straightforward conversion, C++ will mindlessly set the bits and
          bytes as it would for the appropriate type, and it is likely your code will
          run with the "Two's Compliment" style of signed data types.
          
            In two's compliment, signed integers use one bit to track the sign, 0 for
          positive and 1 for negative. They then count up from 0 in binary as one would
          expect (001, 010, 011, etc.) but count down from 0 in the opposite manner
          (111, 110, 101, etc.). This also has the quirk of making the range of possible
          values uneven, with the minimum always being one lower than the maximum is high
          (ie: range of -128 to 127).
          
            If your code operates with "One's Compliment" then one bit is still used to
          determine the sign, but it still counts up in the same way for positive and
          negative values. This has the quirk of having positive and negative variations
          of 0 (0000 and 1000).
  */
  std::cout << "Unsigned (0): " << unsigned(0) << std::endl;
  std::cout << "Unsigned (-1): " << unsigned(-1) << std::endl;
  
  // As a final note, you can declare any variable as 'const', meaning 'constant'.
  // This means that the variable will never change in value, and as a result its
  // value must be set at the time of its creation.
  const int my_const_int = 5;
  
  return 0;
}