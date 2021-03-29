/*
    A 'Reference' is a pointer whose address is set when it is created,
  and afterwards you no longer need to use '&' and '*' to read and
  manipulate the data.
  
  A reference is declared by adding a '&' right after the type, before the name.
*/

int main(int argc, char** argv)
{
  int my_integer = 5;
  
  // This is still basically a pointer, but you assign it to
  // the variable itself, instead of the address
  int& my_reference = my_integer;
  
  // You can then read and manipulate the data of that variable
  // without the '*' operator
  my_reference = my_reference - 9;
  
  return my_integer;
}