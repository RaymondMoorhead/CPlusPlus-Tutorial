/*
              ---------- INTRODUCTION ----------
  
  
    Fundamentally, programming is about telling the
  computer to perform a series of operations in order to
  achieve your goal, whether that's adding two numbers or
  showing a character bounce up and down on the screen. In
  this regard, it is worth remembering that computers will
  take any and all commands literally, regardless of your
  actual intentions. If there is an issue in your code,
  chances are it's because of a mistake you made. Keep
  calm, double check your work, and print debug information
  liberally.
  
    C++ is a compiled language, this means that you write
  your code, and the compiler will convert it into machine
  code which can execute on the target machine. Machine
  code differs between architectures (32-bit, 64-bit, x86,
  ARM, etc.) and operating systems, so your compilation
  target matters. By default it will be whatever your machine
  is, so it's something you need not be concerned with unless
  or until you try to run your application on another system.
  
    Writing code means stringing together small operations
  to build up to something grand. Read a sentence from
  the console, add 5 to every character, print it out
  again. Congratulations, with that you've encrypted the
  sentence with a form of the Caesarian Cipher. If there is
  some fundamental building block you don't know, such as
  reading from the console in this last example, then
  google it or check the Lesson's source files or Help folder.
  One of the common points of wisdom in programming is:
          "All roads lead to stackoverflow.com"

              ---------- SYNTAX MATTERS ----------
  
  
    The compiler will take your code as-is, and will not
  try to interpret your meaning in any way. So if you write
  the name of your function as 'myFunction', and then refer
  to it as 'MyFunction', you will receive an error for
  an unknown or undefined function.
  
    However, C++ is whitespace independent (spaces, new lines,
  tabs, etc.). For any place where some whitespace is necessary
  (usually to separate identifiers and types), you can have as
  much or as little as you want. Additionally, statements are
  ended with a semicolon ';' character. This  means that you will
  need to add lots of semicolons everywhere, but on the bright
  side you can space things out to be more legible.
  
     Below are the formats for fundamental operations, with examples.
  To see how these are used in writing programs, please see the
  lessons. To see other types and operations, check Terminology.h
  
  variable:
  
    type identifier;
    type identifier = value;
    type identifier(value);
    
    */
      int my_int;
      int my_assigned_int = 5;
      int my_constructed_int(10);
    /*
  
  function:
  
    return_type identifier(arguments_with_type)
    {
      function_operations;
    }
    
    */
      int AddTwo(int input)
      {
        return input + 2;
      }
      
      float GetPi(void)
      {
        return 3.14159f;
      }
    /*
  
              ---------- CODE FLOW ----------
  
  
    For all intents and purposes, your code will flow in
  a linear fashion. It always starts in a function called
  main, which will occur only once in an entire project. A
  function is a block of code which takes in data, does
  something with it, and returns a result. Your main function
  will run through its commands, one by one, until it reaches
  the end which stops the program.
  
    There are ways to branch your code using 'if' statements,
  and repeat code with 'while' loops. You can introduce input
  and randomness that could potentially alter values. These
  will not be covered in great detail, but notes and examples
  can be found in Terminology.h
  
    It is through these branches, loops, and calls to other
  functions that your program grows in complexity and interest.
  Never forget though, that at the end of the day it is
  possible to manually walk through each operation of any
  program. It will be necessary to walk through smaller snippets
  on a regular basis.
  
  
              ---------- DEBUGGING ----------
  
  
    As stated earlier, your greatest tool in debugging is
  a printout of what is happening before, during, and after
  the problem area. If you are using an IDE like Visual Studio,
  make use of 'breakpoints', which allow you to pause execution
  and check the values of the variables. In Visual Studio this
  is done by clicking the column left of the line number, then
  when the program reaches that line it will stop.
  
    As also stated earlier, feel free to google your problems,
  especially if they involve an external API (glfw, fmod, ImGui,
  Windows, Mac, etc.). Try to be as specific as possible, if
  there is some kind of error code retrieval then make use of
  it. Ie: don't google "OpenGL black screen," get the code with
  glError, find exactly where the error occurs, and then google
  "OpenGL error 1281 on setting VBO."
  
  
              ---------- SO, HOW DO I CODE ----------
  
    The actual terms and readily available functions from
  common and/or standard libraries are quite varied. I
  recommend you take things slowly, see what techniques and
  functions are used in the Lessons, and go from there. Once
  you see how to write a basic program in Lesson 1, you should
  create a separate Visual Studio project to use as a sandbox
  for testing concepts and ideas you may have.
  
    If you want to forge ahead beyond these lessons, or are
  interested in learning additional things I don't cover
  extensively, then try googling some of the terms below:
        
  Data Structures:
    linked list = a structure where data is stored in separately allocated nodes
    map         = a structure where a value is accessed with a key
    tree        = a structure where data is organized in branches
    vector      = a self-expanding array
    
  Graphics APIs:
    DirectX     = Microsoft's graphics library
    OpenGL      = Open Graphics Library specification by Khronos, requires extensions to work on Windows
    Vulkan      = also made by Khronos, more complex than OpenGL, but can be faster
    
  Other:
    ImGui              = API which provides graphical debug windows, works with all of the above Graphics APIs
    Lambda Expressions = temporary functions usually passed in to other functions, usually as an operation to perform on each element of a data structure
    
  Sorting Algorithms and their complexities (time to finish):
    O(?)        bogo sort   = a joke sorting alorithm, randomly moves an entry, and checks if it's sorted
    O(n^2)      bubble sort = moves the highest value to the end, repeat
    O(n*log(n)) quick sort  = sub-divides area to sort
    O(n*k)      radix sort  = digit by didgit sort, from least to most significant
    
  Sound APIs:
    FMOD        = relatively easy to use commercial sound API, the license is free for small scale projects (see their agreement for details and changes)
*/