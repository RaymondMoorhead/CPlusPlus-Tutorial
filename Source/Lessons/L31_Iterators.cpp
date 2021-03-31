/*
    Iterators are a nearly universal way to sequentially
  acquire each element of a data structure, and read it or
  modify it. This is less about C++ and more about the
  standard template library- but their structures will be
  frequently used in your code.
  
  Some common structure functions using iterators are as follows:
    begin   = Get an iterator for the start of the structure
    end     = Get an iterator for the end of the structure
    insert  = Add an element at a specific iterator position
    erase   = Remove an element from a specific iterator position
    
  For iterators themselves, you will mostly use:
    ++      = Increment the iterator to the next element
    *       = Access the current element
    !=      = Are two iterators for different elements?
*/

#include <vector>
#include <stdio.h>

int main(int argc, char** argv)
{
  std::vector<int> my_vector;
  
  // the type for iterators can be rather lengthy, see the NOTE
  // at the end for a shorter way
  std::vector<int>::iterator my_iterator;
  
  // fill the vector with sample data
  for(int i = 0; i < 10; ++i)
    my_vector.push_back(i);
  
  // find the first element with a value of 5
  for(my_iterator = my_vector.begin(); my_iterator != my_vector.end(); ++my_iterator)
    if(*my_iterator == 5)
      break;
  
  // remove the element we found with our iterator
  my_vector.erase(my_iterator);
  
  // print my_vector's contents using an iterator
  printf("\tmy_vector:");
  for(my_iterator = my_vector.begin(); my_iterator != my_vector.end(); ++my_iterator)
    printf(" %i", *my_iterator);
  printf("\n");
  
  return 0;
}

/*
    So why use an iterator when you can just index into it like an array?
  The vector is an exception in that it is just a fancy array, most
  other structures either don't use numerical indexes, or are formed
  in such a way that repeated incremental indexing will be very slow.
  We'll see an example of this in our next lesson, on the Linked List.


  NOTE:   These days you'll rarely see the full type written out
        for iterators, as they can easily be dozens of characters
        long. As of C++11 we have a convenient keyword called 'auto',
        which simply makes the type of something whatever is assigned
        to it. So you're more likely to see the following:
        
          for(auto it = my_vector.begin(); it != my_vector.end(); ++it)
          
          This keyword shouldn't be used freely, as it can add confusion
        for future readers about what something is. You should also remember
        that 'auto' does not mean something can be any type, it just means
        the compiler will determine what type it should be.
*/