/*
    'Vectors' are among the most common, and the concept
  behind them is:
    "What if arrays just made themselves bigger when you need more space?"
     
    Of course it isn't really this simple, but to the end-user
  this seems to be what happens. Internally a vector allocates
  an array to store data in, and when a user attempts to add
  data beyond its bounds, it allocates a new larger array and
  copies over all existing data to it. So in summary:
  
  Vector (std::vector<my_type>)
    -Is a resizing array (resizing is slow, must copy old data)
    -Instant random access
    -Instantly adds data to the back (if not resizing)
    -Instantly removes data from the back
    -Instantly clears all data
    -Slow to insert data in the middle (move old data over)
    -Slow to erase data in the middle (move old data over)
    
  See the details at: https://www.cplusplus.com/reference/vector/vector/
*/

#include <vector>
#include <stdio.h>

int main(int argc, char** argv)
{
  std::vector<int> my_vector;
  
  while(my_vector.size() < 10)
  {
    printf("my_vector has %lu elements, and room for %lu\n", my_vector.size(), my_vector.capacity());
    
    // add a value to the back of the vector
    my_vector.push_back(0);
  }
    
  // remove all elements from the vector
  my_vector.clear();
  
  return 0;
}

/*
  NOTE:   The data structures in the 'standard template library'
        use many similar functions for ease of use. A few common
        ones are as follows:
        
          size    = The number of elements you've added
          push    = Add an element to the front/back of the structure
          pop     = Remove an element from the front/back of the structure
          clear   = Remove all elements
          empty   = Returns true if size is 0
          []      = Access an index, just like an array
          
        There are additional common functions, but they use iterators, which we'll
          cover next lesson.
*/