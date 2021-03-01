/*
    'Pointers' are one of the most important, and dangerous aspects of C and
  C++. They contain the address in memory of another type of data, and can
  be used to read and modify that data. The issues arise when the address
  you have is incorrect, thankfully modern operating systems are secure
  enough to prevent these operations from occurring outside of your program.
  
  A pointer is declared by adding a '*' right after the type, before the name.
*/

int main(int argc, char** argv)
{
  // This is a regular integer
  int my_integer = 5;
  
  // This is a 'pointer' to an int, it simply contains the
  // address of an int
  int* my_pointer;
  
  // NOTE: It is best practice to set unused pointers to be '0', or 'nullptr'
  my_pointer = nullptr;
  
  // You can get the address of a variable with the '&' operator
  my_pointer = &my_integer;
  
  // You can then read and manipulate the data at that address
  // with the '*' operator
  *my_pointer = *my_pointer - 9;
  
  // you can also create pointers to pointers...to pointers...to pointers...
  int** my_pointer_pointer = &my_pointer;
  **my_pointer_pointer += 200;
  
  return my_integer;
}