/*
    You can use the preprocessor to control what code
  is even compiled, allowing you easily switch between
  different builds. This way you can change from a debug
  build to a release build without manually removing every
  instance of a printout.
*/

#include <stdio.h>

// this macro doesn't replace DEBUGGING with anything,
// it just exists, and that's enough for what we're doing
#define DEBUGGING


int main(int argc, char** argv)
{
  // use this code if DEBUGGING is defined
  #ifdef DEBUGGING
    printf("We're in debug mode\n");
  // else...
  #else
    printf("We're in release mode\n");
  // end the 'ifdef'
  #endif
  
  printf("...doing some work...\n");
  
  // use this code if DEBUGGING is not defined
  #ifndef DEBUGGING
    printf("We're not debugging\n");
  #endif
}

// try this yourself, comment out the line '#define DEBUGGING'
// and see what happens