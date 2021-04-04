/*
    The Set has several variations with significant internal
  differences, so we'll be speaking in broad terms about it.
  
    Sets contain UNIQUE pieces of data and are generally quick at
  adding and removing elements anywhere inside. They do not
  support random access, as an index is effectively the data;
  if you know the 'index' then you already have the data. They
  also consume large amounts of memory in order to achieve their
  universally quick speeds.
  
  Set (std::set<my_type>)
    -Unique data
    -Quickly inserts data
    -Quickly removes data
    -Automatically sorts data
    -Uses a ton of memory
    
  See the details at: https://www.cplusplus.com/reference/set/set/
*/

#include <set>
#include <stdio.h>

void Print(std::set<int>& my_set)
{
  // print out the elements using an iterator
  printf("my_set:");
  for(auto it = my_set.begin(); it != my_set.end(); ++it)
    printf(" %i", *it);
  printf("\n");
}

int main(int argc, char** argv)
{
  std::set<int> my_set;
  
  // add miscellaneous values to the set
  my_set.insert(5);
  my_set.insert(3);
  my_set.insert(9);
  my_set.insert(11);
  my_set.insert(-4);
  
  Print(my_set);
  
  // remove some elements
  my_set.erase(3);
  my_set.erase(9);
  
  Print(my_set);
    
  // remove all elements from the set
  my_set.clear();
  
  return 0;
}

/*
  NOTE:   For some interesting data on the memory consumption of sets
        alongside other STL containers, here is blog post by Daniel Lemire:
        
        https://lemire.me/blog/2016/09/15/the-memory-usage-of-stl-containers-can-be-surprising/
*/