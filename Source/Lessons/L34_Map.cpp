/*
    The Map, like Set has several variations with significant
  internal differences, so we'll be speaking in broad terms about it.
  
    Maps contain a 'Key-Value Pair', where the key is unique and acts
  as the index, and the value is the data stored at that index. Like
  Sets they are generally quick at all operations, and consume large
  amounts of memory to achieve this.
  
  Map (std::map<my_key_type, my_val_type>)
    -Unique key used to store data in buckets via hash
    -Quickly inserts data
    -Quickly removes data
    -Automatically sorts data
    -Uses a ton of memory
    
  See the details at: http://www.cplusplus.com/reference/map/map/
*/

#include <map>
#include <stdio.h>

void Print(std::map<char, int>& my_map)
{
  // print out the elements using an iterator
  printf("my_map:");
  for(auto it = my_map.begin(); it != my_map.end(); ++it)
    printf(" (%c, %i)", it->first, it->second);
  printf("\n");
}

int main(int argc, char** argv)
{
  std::map<char, int> my_map;
  
  // add miscellaneous values to the map
  my_map.emplace('d', 5);
  my_map.emplace(';', 3);
  my_map.emplace('!', 9);
  my_map.emplace('x', 11);
  my_map.emplace('a', -4);
  
  /*
    NOTE:   Because maps store their data as 'pairs', they must
          be inserted as such. The 'emplace' function is made
          for convenience, and automatically creates a 'pair' to
          put the key and value into.
  */
  
  Print(my_map);
  
  // remove some elements
  my_map.erase(';');
  my_map.erase('d');
  
  Print(my_map);
    
  // remove all elements from the map
  my_map.clear();
  
  return 0;
}