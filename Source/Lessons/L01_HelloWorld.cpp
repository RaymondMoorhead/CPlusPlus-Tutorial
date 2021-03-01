/*
    A 'Hello World' program is considered the most basic useful
  code that can be written in a language. It generally involves
  displaying the message "Hello World" in some form. Here we'll
  cover how to write one in C.
  
    The first thing you must do is 'include' another file which has
  a function we can use to print text to the console. Then we invoke
  that specific function, which here is 'printf' (meaning 'print
  formatted'), and pass a 'string' to it, which is just a series of
  characters in double-quotes.
*/

#include <stdio.h> // has the 'printf' function

int main(int argc, char** argv)
{
  printf("Hello World\n");
  return 0;
}

/*
      The '\n' at the end generates a 'newline', which is to say that
    it ends the line and moves the cursor to the start of the next line.
    This is necessary because most printing functions in C and C++ don't
    implicitly end lines.

    NOTE:   You probably noticed the semi-colons after each line. C++
          doesn't claim to know when you're done with a command, so
          you have to tell it when you are. The 'whitespace' created
          through spacing and 'newlines' actually means very little,
          if anything at all. Entire programs can be written on a
          single line, though this makes code very difficult to read
          and is a bad practice.
          
            One place where this is flaunted is the International
          Obfuscated C Code Contest, where the goal is to write code
          that performs some action, and the judges have to determine
          what that code does before running it. (https://www.ioccc.org/)
*/