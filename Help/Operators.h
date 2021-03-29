/*
   For all operator examples, assume we have three variables, 'a', 'b', and 'c'
    
   ***** ASSIGNMENT OPERATOR *****
   
   a = b      Assignment operator, sets the left side to be equal to
              the right side.
              
   ***** ARITHMETIC OPERATORS *****
              
   a + b      Arithmetic addition operator, adds the left and right
              side together
   
   a - b      Arithmetic subtraction operator, subtracts the right
              side from the left
   
   a * b      Arithmetic multiplication operator, multiplies the left
              and right side together
   
   a / b      Arithmetic division operator, divides the right side from
              the left side
   
   a % b      Arithmetic modulo operator, gives the remainder of a / b
              Examples:
                5 % 5 = 0
                5 % 3 = 2
                5 % 2 = 1
                
   ***** COMPOUND ASSIGNMENT OPERATORS *****
   
   These operators are all meant to be combinations of '=' and some other
   operation. Please see the entry for the other operator in question if
   you aren't sure what it is or does.
   
   a += b     Same as:
                a = a + b
                
   a -= b     Same as:
                a = a - b
                
   a *= b     Same as:
                a = a * b
                
   a /= b     Same as:
                a = a / b
                
   a %= b     Same as:
                a = a % b
                
   a >>= b     Same as:
                a = a >> b
                
   a <<= b     Same as:
                a = a << b
                
   a &= b     Same as:
                a = a & b
                
   a ^= b     Same as:
                a = a ^ b
                
   a |= b     Same as:
                a = a | b
                
   ***** INCREMENT AND DECREMENT OPERATORS *****
   
   ++a        Increments the variable by 1
   
   a++        Increments the variable by 1 after the current statement
              finishes. So for 'b = a++' the value of 'b' will be the
              original value of 'a', not the incremented value
   
   --a        Decrements the variable by 1
   
   a--        Decrements the variable by 1 after the current statement
              finishes. So for 'b = a--' the value of 'b' will be the
              original value of 'a', not the decremented value
              
   ***** RELATIONAL AND COMPARISON OPERATORS *****
   
   a == b     Evaluates to 'true' if 'a' and 'b' are equal, otherwise
              evaluates to 'false'
   
   a != b     Evaluates to 'true' if 'a' and 'b' are not equal, otherwise
              evaluates to 'false'
   
   a > b      Evaluates to 'true' if 'a' is greater than 'b', otherwise
              evaluates to 'false'
   
   a < b      Evaluates to 'true' if 'a' is less than 'b', otherwise
              evaluates to 'false'
   
   a >= b     Evaluates to 'true' if 'a' is greater than or equal to 'b',
              otherwise evaluates to 'false'
   
   a <= b     Evaluates to 'true' if 'a' is less than or equal to 'b',
              otherwise evaluates to 'false'
              
   ***** LOGICAL OPERATORS *****
   
   !a         NOT operator, inverses boolean value, 'true' becomes 'false'
              and 'false' becomes 'true'
              
   a && b     AND operator, evaluates to 'true' if the boolean values of 'a'
              and 'b' evaluate to 'true', otherwise evaluates to false
              
   a || b     OR operator, evaluates to 'true' if the boolean values of 'a'
              or 'b' evaluate to 'true', otherwise evaluates to false
              
   ***** POINTER OPERATORS *****
   
   &a         ADDRESS OF operator, which gives the address of the variable
              it's in front of
              
   *a         INDIRECTION operator, which dereferences a pointer. This will
              access the memory a pointer is looking at, enabling reading
              and writing of it.
              
   ***** CONDITIONAL TERNARY OPERATOR *****
   
   The TERNARY operator is generally used as a shorthand if/else statement.
   It takes in something that can be evaluated as 'true' or 'false', and then
   the results of 'true' and 'false' respectively
   
   (condition ? true_result : false_result)
   
   Here is an example:
   */
      void TernaryExamples()
      {
        int a = (true ? 5 : 2);
        // a is now 5
        char b = (a < 4 ? 'T' : 'F');
        // b is now 'F'
      }
   /*
   
   ***** COMMA OPERATOR *****
   
   The COMMA operator separates two or more expressions where only one would
   normally be present. If anything is assigned to this set of operations,
   the value assigned is that of the last expression.
   
   (expression1, expression2, ...)
   
   Here is an example:
   */
      void CommaExamples()
      {
        // creates two ints, 'a' and 'b'
        int a, b;
        
        a = (b = 3, b + 2);
        // b is now 3
        // a is now 5
      }
   /*
   
   ***** BITWISE OPERATORS *****
   
   These operators directly influence and are influenced by the bits
   and bytes of a variable. If you use these, you should mentally
   track how the bits are laid out.
   
   The results of operators &, |, ^, and ~ correlate the bits that
   lie in the same position of the two variables.
   
   a & b      BITWISE AND operator, for two '1' bits the result is
              '1', otherwise it is '0'.
                So for two 2-bit variables:
                  00 & 11 = 00
                  01 & 11 = 01
                  10 & 11 = 10
                  11 & 11 = 11
   
   a | b      BITWISE OR operator, for a '1' bit in either position,
              the result is '1', otherwise it is '0'.
                So for two 2-bit variables:
                  00 | 00 = 00
                  01 | 00 = 01
                  10 | 11 = 11
                  11 | 11 = 11
              
   a ^ b      BITWISE XOR operator, for a '0' or '1' bit in both
              positions, the result is '1', otherwise it is '0'.
                So for two 2-bit variables:
                  00 ^ 00 = 00
                  01 ^ 00 = 01
                  10 ^ 11 = 01
                  11 ^ 11 = 00
   
   ~a         BITWISE NOT operator, flips '0' bits to '1', and '1'
              bits to '0'
                So for a 2-bit variable:
                  ~00 = 11
                  ~01 = 10
                  ~10 = 01
                  ~11 = 00
   
   a << b     BITWISE SHIFT LEFT operator, moves all bits over to the
              left by the given amount.
                So for a 4-bit variable and integer shift:
                  0101 << 1 = 1010
                  0101 << 2 = 0100
                  0101 << 3 = 1000
                  0101 << 4 = 0000
   
   a >> b     BITWISE SHIFT RIGHT operator, moves all bits over to the
              right by the given amount.
                So for a 4-bit variable and integer shift:
                  1010 >> 1 = 0101
                  1010 >> 2 = 0010
                  1010 >> 3 = 0001
                  1010 >> 4 = 0000
                  
   ***** EXPLICIT TYPE CASTING OPERATOR *****
   
   This converts a value of one type into another. Be careful, as this
   can lead to a loss of precision as larger types (8 bytes) are
   converted to smaller types (4 bytes) or different formats (float to
   int)
   
   type(data_to_convert)
   
   */
      void CastExample()
      {
        int a;
        float b = 3.14f;
        
        // cast b to an int
        a = int(b);
        // a is now 3
      }
   /*
   
   ***** SIZEOF OPERATOR *****
   
   This is more like a built-in function than an operator. It accepts a
   variable or type as a parameter, and returns the size in bytes of the
   input.
   
   sizeof(type)
   
   */
      void SizeofExample()
      {
        int a;
        
        // in 64-bit C++, an int is 4 bytes, so
        // that's what all of these resolve to
        a = sizeof(int);
        a = sizeof(a);
        a = sizeof(3);
      }
   /*
*/