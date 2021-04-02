#include <stdio.h>
#include<stdarg.h>  // va_list, va_start, va_arg
#include <stdlib.h> // atoi

int Main(int argc, const char** argv);

bool Test(int argc, const char** argv)
{
  int our_result;
  int true_result;
  
  // now run test and print test data
  our_result = Main(argc, argv);
  printf("\t%s", argv[1]);
  true_result = atoi(argv[1]);
  for(int i = 2; i < argc; ++i)
  {
    true_result += atoi(argv[i]);
    printf(" + %s", argv[i]);
  }
  
  if(true_result == our_result)
    printf(" == %i\n", true_result);
  else
    printf(" != %i\n", our_result);
  
  return true_result == our_result;
}

bool TestVariadic(int argc, ...)
{
  const char** argv = new const char*[argc];
  
  // copy over the variadic arguments
  va_list cur_arg;
  va_start(cur_arg, argc);
  for(int i = 0; i < argc; ++i)
    argv[i] = va_arg(cur_arg, const char*);
  
  // now run the test
  bool result = Test(argc, argv);
  
  delete argv;
  
  return result;
}

int main(int argc, const char** argv)
{
  bool result = true;
  
  if(argc > 1)
  {
    printf("Using custom data\n");
    result &= Test(argc, argv);
  }
  else
  {
    printf("No arguments provided, using sample data\n");
    result &= TestVariadic(2, argv[0], "1");
    result &= TestVariadic(3, argv[0], "1", "3");
    result &= TestVariadic(3, argv[0], "3", "-3");
    result &= TestVariadic(2, argv[0], "-3");
    result &= TestVariadic(7, argv[0], "1", "2", "3", "4", "5", "6");
  }
  
  if(result)
    printf("SUCCESS\n");
  else
    printf("FAILURE\n");
  return 0;
}