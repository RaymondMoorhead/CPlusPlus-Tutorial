/*
    Data can take many forms, and choosing the right one
  for your purposes is important- but the way in which
  your collection of data is stored is equally important.
  The ways in which to do this are unlimited, but there
  are many common and practical solutions readily available
  in the 'standard template library' (also called 'STL').
  We'll cover a few of these over the next few lessons.
  
    'Pairs' are the most basic structure in the STL, and
  only consist of a 'first' value and 'second' value. They
  are quite helpful in many circumstances where data should
  be grouped in a particular way, and are used in some larger
  structures of the STL (namely 'maps' which we'll cover later).
*/

#include <utility> // pair
#include <stdio.h>

int main(int argc, char** argv)
{
  std::pair<char, int> my_pair('a', 5);
  
  printf("my_pair is (%c, %i)\n", my_pair.first, my_pair.second);
  
  my_pair.second = 10;
  
  printf("my_pair is now (%c, %i)\n", my_pair.first, my_pair.second);
  
  return 0;
}