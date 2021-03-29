#include <stdio.h>
#include <string.h>

unsigned StringLength(const char*);

bool TestCase(const char* test)
{
  unsigned our_length = StringLength(test);
  unsigned true_length = unsigned(strlen(test));
  if(our_length == true_length)
    printf("\tCORRECT for string \"%s\", it is of length %u\n", test, our_length);
  else
  {
    printf("\tWRONG for string \"%s\". StringLength returns %u, but it is actually %u\n", test, our_length, true_length);
    if(our_length == (true_length + 1))
      printf("\t\tHINT: did you accidentally include the null terminator at the end, or start at index 1 instead of 0?\n");
  }
  
  return our_length == true_length;
}

int main(int argc, char** argv)
{
  printf("Starting %s\n", argv[0]);
  printf("If the exercise crashes, then you tried to read characters beyond the null-terminator ('\\0')\n");
  
  bool success = true;
  
  success &= TestCase("Hello World");
  success &= TestCase("Goodbye World");
  success &= TestCase("");
  success &= TestCase("000 111 222 333 444 555");
  
  if(success)
    printf("All tests passed\n");
  else
    printf("One or more tests failed\n");
  
  return 0;
}