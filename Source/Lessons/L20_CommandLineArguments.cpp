/*
    It's time to use 'argc' and 'argv'. They are the
  inputs for your program from the command line at
  the moment of execution. 'argc' is the 'argument
  count', and 'argv' is the 'argument vector'. 'argv'
  is an array of C-style strings.
*/

#include <stdio.h>

int main(int argc, char** argv)
{
  // The 0th argument is always the name of the program
  if(argc == 1)
  {
    // Here we strip away any file path data, to simplify the output...
    char* app_name = argv[0];
    for(int i = 0; argv[0][i] != '\0'; ++i)
      if(argv[0][i] == '\\' || argv[0][i] == '/')
        app_name = argv[0] + i + 1;
    
    // ...and then show howthe program should be invoked
    printf("No arguments were provided!\n");
    printf("\t* Open your command prompt ('cmd') to 'C++Lessons\\Compiled\\Lessons'\n");
    printf("\t* launch the program as follows:\n");
    printf("\t\t%s <arg1> <arg2> <arg3> <etc...>\n", app_name);
  }
  else
  {
    printf("The arguments provided are:\n");
    for(int i = 0; i < argc; ++i)
      printf("\tArg[%i]: %s\n", i, argv[i]);
  }
  return 0;
}