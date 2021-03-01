

/*
  A forward slash followed by an asterisk means that we've
  created a comment block, in which we can type whatever we
  wish. The block ends when an asterisk is followed by a
  forward slash.
*/

// Two forward slashes means the remainder of that line is a comment.
// To continue it on the next line, we simply do the same on that line.



// With that out of the way, we can now talk code



// ----- ----- IN THE BEGINNING, THERE WAS MAIN ----- -----

/*
    Programming is about giving a computer a series of commands it can
  execute to perform some task. For all intents and purposes, only the
  programmer understand the objective, and the computer will blindly
  do what it has been told regardless of the result.
  
    These commands are usually in a linear sequence, with the next
  command only beginning execution after the prior one has completed.
  There are ways around this, which we'll start covering in the lesson
  on 'multi-threading'.
  
    In C++ these commands always start with a 'function' called 'main'. A
  'function' is a block of code that can be invoked by calling its name,
  it can take in several parameters/arguments, and return a result to
  the place where it was called. In the case of 'main' it takes in
  command-line arguments and returns an error/success code in the form
  of an integer (whole number which can be positive or negative).
*/

int main(int argc, char** argv)
{
  return 0;
}

/*
    We'll talk in detail about data types later, for now just know
  that the 'int' on the far left is type of the data being returned
  by the function 'main', which takes in two arguments. These arguments
  are 'argc' which is of type 'int', and 'argv' which is of type 'char**'.
  The code executed by the function is within the opening and closing curly
  braces that follow. In this example we simply return a value of '0'.
*/