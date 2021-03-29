/*
    Data can be stored in one of several built-in 'primitive types', or
  your own custom composite type via something called a 'class' or
  'struct'. We'll cover classes and structs later, here we'll be looking
  into the primitive types.
  
    You should first know that when we wish to create a 'variable' to store
  data in, such as a name or number, it must be declared in a specific way. The
  'type' is on the left side, and may involve several separate labels. The name
  of the variable is on the right. If we want to give it a value, we would then
  use the '=' operator to give it one.
*/

int main(int argc, char** argv)
{
  // The 'int' type represents an integer, a whole number
  // which by default can be positive or negative.
  int my_integer;
  
  // The 'float' type represents a 'floating point' value,
  // effectively a decimal number. 
  float my_float;
  
  // The 'double' type represents a 'double precision floating
  // point' value. It can accurately contain more decimal places
  // worth of data than a float, but uses more memory.
  double my_double;
  
  // The 'bool' type represents a 'boolean' value, effectively
  // 'true' or 'false'.
  bool my_bool;
  
  // The 'char' type represents a 'character' value, a single
  // character, usually from the 'Ascii Table'. In the background
  // this is stored as a number, and that number is interpreted as
  // a character.
  char my_char;
  
  // Here is how we would assign data to each type:
  my_integer  = 5;
  my_float    = 5.5f;
  my_double   = 5.5;
  my_bool     = true;
  my_char     = 'A';
  
  /*
      Decimal numbers are 'double' by default, in order to use it as a
    'float' there needs to be an 'f' after the number.
    
      These 'variables' can be used to perform different operations:
        = Assign
        
        + Add
        - Subtract
        * Multiply
        / Divide
        
        += Add and assign
        -= Subtract and assign
        *= Multiply and assign
        /= Divide and assign
      
      More complicated mathematical operations must be either programmed
    by you, or you can include and use an existing library of functions
    which perform them, such as 'cmath'
  */
  
  my_integer = my_integer + 7;
  my_integer += 7; // same operation as above
  
  return my_integer;
}

/*
  NOTE:   What is the value of a variable before we assign it with the '='
        operator? We don't know, the value is based on the 'bits' in memory,
        and those 'bits' are whatever was there when the space was given to
        our program. It is usually 0, but could be anything, and this will
        be a common source of errors in your early programs. Your code may
        run fine a thousand times, then spontaneously break, because until
        that point you had been unlucky enough for it to initialize a
        variable as 0.
  
  NOTE:   Computer data is stored in 'bits', which in turn are lumped into
        'bytes', and are counted in 'binary'. A bit can be thought of as a
        single 0 or 1 value. A byte is 8 bits, so it is a series of 0 or 1
        values. These bits and bytes are counted up much like the decimal
        system we're used to, but we carry to the next column when we would
        reach two instead of ten (ie: instead of 08, 09, 10, 11, etc. we use
        00, 01, 10, 11, etc.). A quick way to calculate a binary value in
        decimal is to give each 1 position a value of 2^(column #), with the
        starting column having a # of 0. So for 0101 the value is 2^2 + 2^0
        which is 5. It can also be thought of as:
        (0 * 2^3) + (1 * 2^2) + (0 * 2^1) + (1 * 2^0)
*/