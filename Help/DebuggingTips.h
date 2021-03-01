/*
   If you run into an error, check these things:
   
    * If your code looks fine, did you add a semicolon
      after it?
      
    * If your loop or 'if' statement is being ignored, did
      you add a semicolon after it? If you did, they effectively
      do nothing because they see an empty statement.
   
    * If you're using something from another file, did you
      include the file?
      
    * Everything here is case-sensitive, did you use the same
      spelling and capitalization in every place you use something?
      
    * Does the function or class (declaration or implementation)
      occur before it is used? In C++, the file is read once
      from top to bottom, and things must be declared before
      they are used.
      
    * If the error is due to redefinition, try adding
      '#pragma once' to the top of your header files. If that
      doesn't work, make sure you aren't using the same name in
      different places.
      NOTE: In this project especially, ensure that only one
            'main' function is visible. All mains should be
            inside '#if 0' blocks, except for the one you wish
            to run.

   If you run into a bug, check these things:
   
    * Did you give your variable a value when you created it?
      If you didn't then its starting value is whatever was
      in that memory location at the time, which is usually 0,
      but could be anything.
      
    * Is your variable being converted or misinterpreted? You
      can add integer and floating point values together, but
      they must be converted to the same type to do so. This
      can result in 5 + 4.5 becoming 5 + 4, which would give a
      different result.
      
   If you run into a crash, you are trying to access memory outside
   of the bounds of your program, nearly every time. The only
   exception to this rule is an assertion, in which case the issue
   will be expressly declared (such as "Expected positive value in
   function MyFunc").
   
    * If you are indexing into an array, make sure you are doing so
      properly. Remember that array indices start at '0' and thus end
      at 'size - 1'. Thus the for loop is nearly always the following:
        */for(int i = 0; i < size; ++i)/*
      See SAMPLE_01 for example points of failure.
    
    * Make sure your pointers are assigned to either a variable's
      address, or allocated memory.
      
    * Make sure you aren't de-referencing a pointer which is using
      the address of a variable from function called in the same
      scope or a lower scope. See SAMPLE_02 for an example
      
    * Make sure you aren't de-referencing a pointer which you have
      de-allocated. See SAMPLE_03 for an example
*/

// ---------- DEBUGGING REFERENCE SAMPLES ----------

// SAMPLE_01 = invalid array indexing
{
  void SAMPLE_01(void)
  {
    const int size = 10;
    int array[size];
    
    for(int i = 1; i <= size; ++i)
      array[i] = i; // crash, one index too high
      
    for(int i = size; i >= 0; --i)
      array[i] = i; // crash, one index too high
      
    for(int i = size - 1; i > 0; --i)
      array[i] = i; // not a crash, but missing index 0
  }
}

// SAMPLE_02 = invalid stack variable de-referencing
{ 
  int* AssignBadPointer(void)
  {
    // we declare an int on the stack
    int someInt;
    
    // we return its address. The moment this function
    // returns, local stack variables go out of scope
    // and their memory is invalidated.
    return &someInt;
  }
  
  void SAMPLE_02(void)
  {
    int* bad_pointer = AssignBadPointer();
    *bad_pointer; // crash
  }
}

// SAMPLE_03 = de-referencing freed memory
{
  void SAMPLE_03(void)
  {
    // we allocate memory
    int* bad_pointer = new int;
    
    // we deallocate memory, it has been returned
    // to the OS and that location is outside of
    // the bounds of our program
    delete bad_pointer;
    
    *bad_pointer; // crash
  }
}