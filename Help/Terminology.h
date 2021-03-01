void Terminology()
{
/*
   variable     = A named container which is used to store data of
                  a specific type, such as an integer or float
                  
   identifier   = Effectively the name by which you reference
                  something in your code. These are variable
                  names, function names, class names, etc.
                  For example:
                  */
                  {
                    // for the statement...
                    int my_int;
                    // 'my_int' is the identifier
                    
                    // for the function...
                    void MyFunction() {}
                    // 'MyFunction' is the identifier
                    
                    // for the class...
                    class MyClass() {}
                    // 'MyClass' is the identifier
                  }
                  /*
    
   int          = An integer value, a whole number such as 1 or 2
      
   float        = A floating point value, for all intents and
                  purposes you may consider it a decimal number
                  such as 1.2, 3.14159, etc.
                  
   double       = A double precision floating point number. It takes
                  more memory but is accurate to further decimal
                  places, such as 4.13231434123432432
                  
   bool         = A true or false value
      
   char         = A single character, internally stored as a code, which
                  usually relates to the ascii table. So the ascii
                  character 'A' has code 65, and would be stored in
                  the character as such.
                  
   void         = A non-type. It is only used as a function's return
                  value (which is to say, returns nothing), a function's
                  input (which is to say, it takes no arguments), or
                  as a void pointer (we have the address, not the type).
                  
   signed       = Data that can be positive or negative
   
   unsigned     = Data that can only be positive
   
   const        = Data that cannot be changed after it is declared, its
                  value must be assigned at the point of declaration. The
                  exception to this is a const variable in a class or struct,
                  at which point it must be assigned as part of the construct's
                  initializer list if it isn't set in the body itself.
                  
   array        = A contiguous length of memory used to store some number of
                  pieces of data. You can access this data through a process
                  called 'indexing', where you provide index 'X' as with
                  'my_array[X]'. The first index is '0', and the last is one
                  less than the total size. The array variable itself is actually a
                  pointer to the type contained. An array is created as follows:
                  */
                  {
                    // an array of 10 integers
                    int ia[10];
                    
                    // set index 5 with 66
                    ia[5] = 66;
                  }
                  /*
                  
   pointer      = An address in memory, usually associated with a type. A
                  pointer is declared by adding '*' after the type. The
                  type is important because it tells us how many bytes
                  we're accessing when we dereference the pointer, as well
                  as how many bytes over we move when the pointer is added
                  to or subtracted from. Here is an example:
                  */
                  {
                    char c;
                    int i;
                    
                    // a pointer to a char
                    char* cp;
                    
                    // set 'cp' to the address of 'c'
                    cp = &c;
                    
                    // set the value of 'c' via 'cp'
                    *cp = 'A';
                    
                    // a character is 1 byte, so move cp's address over 5 bytes
                    cp += 5;
                    
                    // a pointer to an int
                    int* ip;
                    
                    // set 'ip' to the address of 'i'
                    ip = &i;
                    
                    // set the value of 'i' via 'ip'
                    *ip = 7;
                    
                    // an int is 4 bytes, so move ip's address over 20 bytes
                    ip += 5;
                  }
                  /*
                  
   dereference  = The act of accessing the memory a pointer has the adress of.
      
   if           = A flow control mechanism that checks if the condition
                  inside is true, if it is then the code afterwards is
                  executed. If there are no {} then only the immediate
                  next line is run, otherwise it's all code in the curly
                  braces. Here is an example:
                  */
                    {
                      int some_integer;
                      
                      if(true)
                        some_integer = 5;
                        
                      if(some_integer < 3)
                      {
                        some_integer = some_integer + 5;
                        some_integer = some_integer - 2;
                      }
                    }
                  /*
                  
   else         = A flow control mechanism that must occur after an 'if'
                  statement. It executes its code only if the preceding
                  check(s) don't. Here is an example:
                  */
                    {
                      int some_integer;
                      
                      if(true)
                        some_integer = 5;
                      else
                        some_integer = 2;
                        
                      if(some_integer < 3)
                      {
                        some_integer = some_integer + 5;
                        some_integer = some_integer - 2;
                      }
                      else
                      {
                        some_integer = some_integer * 7;
                        some_integer = some_integer / 4;
                      }
                      
                      if(true)
                        some_integer = 5;
                      else if (some_integer > 2)
                        some_integer = 2;
                      else
                        some_integer = 9;
                    }
                  /*
                  
   switch       = A flow control mechanism that checks an input value with
                  a series of cases (to see if they are equivalent). On a
                  true evaluation, the cases are no longer checked and code
                  will continue to 'fall through' until it hits a 'break'
                  statement. Here is an example:
                  */
                    {
                      int some_integer = 5;
                      
                      switch(some_integer)
                      {
                        case 3: // case 3 and 4 execute the same code
                        case 4:
                          some_integer = -1;
                          break;
                        case 5: // case 5 executes the code for itself and case 6
                          some_integer = some_integer + 1;
                        case 6:
                          some_integer = some_integer * -1;
                          break;
                        default:// default occurs when there is no match
                          break;
                      }
                    }
                  /*
                  
   break        = A flow control mechanism that immediately ends the 'if' statement,
                  'switch' statement, 'while' loop, or 'for' loop that your code is
                  in.
                  
   while        = A block of code that continues to execute while the
                  condition given is true. The condition is checked at
                  the beginning of the block for 'while' loops, and at
                  the end for 'do while' loops.
                  Here are the formats:
                    while(condition) {statement(s)}
                    do {statement(s)} while(condition)
                  Here is an example:
                  */
                    {
                      int loop_count = 10;
                      while(loop_count > 0)
                      {
                        --loop_count;
                      }
                      // while loop_count is greater than 0,
                      // decrement loop_count
                      
                      do
                      {
                        --loop_count
                      } while(loop_count > 0)
                      // same thing as before, but since the
                      // condition is at the end it will execute
                      // the block once before checking the condition
                    }
                  /*
      
   for          = A block of code that, much like 'while' loops, continues
                  to execute while the condition is true. The difference is
                  that you can add a statement to execute before the first
                  loop, and another statement to execute after each loop.
                  Any or all of these inputs can be left out.
                  Here is the format:
                    for(statement; condition; statement) {statement(s)}
                  Here is an example:
                  */
                    {
                      for(int loop_count = 0; loop_count < 10; ++loop_count)
                      {
                        // code that executes 10 times in sequence
                        for(; loop_count % 3 = 0; loop_count += 5)
                        {
                          // code that executes while loop_count is divisible by 3
                          // loop_count is then increased by 5
                        }
                      }
                    }
}                 /*
                  
   function     = A block of code that can execute given the specified
                  data, and may give back a result value. Such as:
                  */
                    int Maximum(int a, int b)
                    {
                      if(a > b)
                        return a;
                      else
                        return b;
                    }
                  /*
                  
   return       = A statement which stops the execution of the current
                  function, and gives the item after it (if applicable)
                  to anything using the function for assignment, such as:
                  */
                    int Return5(void)
                    {
                      return 5;
                    }
                    
                    void CallReturn5(void)
                    {
                      int my_number = Return5();
                    }
                  /*
                
   struct       = A encapsulating object which is made up of variables
                  and functions, and can be instanced. Its purpose is
                  to make the organization of data simpler, and is
                  fundamental to nearly any project. Its access
                  permissions are public by default. Here is an example:
                  */
                    struct MyStruct
                    {
                      int myInt;
                      
                      // constructor, called when the object is created
                      MyStruct()
                      {
                        myInt = 0;
                      }
                      
                      void AddToMyInt(int number)
                      {
                        myInt += number;
                      }
                    }
                    
                    // we can then create instances of that struct
                    void MyStructExample(void)
                    {
                    }
                  /*
                  
   class        = Identical to a struct, except the access permissions
                  are private by default. See MyPermissionClass below
                  
   public       = Access permission which allows the code to be used
                  by anything anywhere. See MyPermissionClass below
                  
   protected    = Access permission which allows the code to be used
                  only by itself and structs/classes that inherit from
                  it. See MyPermissionClass below
                 
   private      = Access permission which allows the code to be used
                  only by itself. See MyPermissionClass below
                  
   friend       = Access permission exception, which allows a function,
                  struct, or class to access another struct or class' data
                  as if it were public, regardless of the actual permissions.
                  See MyPermissionClass below
                  
                  */
                    class MyPermissionClass
                    {
                      // allow MyStruct to access everything in
                      // this class
                      friend struct MyStruct;
                      
                      // default permission is private
                      int private_int;
                      
                      public:
                        // code here is public
                        int public_int;
                        
                      protected:
                        // code here is protected
                        int protected_int;
                        
                      private:
                        // code here is private
                        int private_int_2;
                    }
                  /*
                  
   inheritance  = When a class or struct 'inherits' from another, it extends
   child class    the original's functionality and simultaneously gains
   parent class   access to it. Instances of this derived object can be
                  treated like the parent, which is called Polymorphism.
                  Here is an example:
                  */
                    // inherit MyPermissionClass publically
                    class MyInheritingClass : public MyPermissionClass
                    {
                      // this class is an extension of MyPermissionClass,
                      // with all the variables and functions it had.
                      // However, this class can only access the public
                      // and protected variables and functions.
                    }
                  /*
*/