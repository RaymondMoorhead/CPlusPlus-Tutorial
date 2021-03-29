// create a function named 'StringLength' which takes in
// a 'const char*' and returns an 'unsigned'. The return
// value should be the number of characters in the given
// c-style string, not including the null-terminator

unsigned StringLength(const char* string)
{
  unsigned size;
  for(size = 0; string[size] != '\0'; ++size) {}
  return size;
}