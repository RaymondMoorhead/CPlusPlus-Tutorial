/*
    The linked list solves the slow insertion problem of
  the vector, but also creates some new issues. It is
  composed of a series of nodes, which contain an index
  of data, and the locations of the next and previous nodes:
  
  struct ListNode
  {
    ListNode* previous;
    T my_data;
    ListNode* next;
  }
  
    The controller of this structure has 'head' and 'tail'
  pointers which are the addresses of the first and last node
  respectively. As a result of this layout, it is very quick
  at inserting and erasing elements- but very slow at random
  access. If you wish to access element N, then the structure
  must start at the head or tail and cycle through until it finds
  N. So in summary:
  
  Linked List (std::list<my_type>)
    -Is a series of nodes which point to the next and previous ones
    -Instantly adds data to the front/back
    -Instantly removes data from the front/back
    -Quickly inserts data in the middle
    -Quickly erases data in the middle
    -Slow random access
    -Slowly clears all data
    -Uses more memory
    
  See the details at: https://www.cplusplus.com/reference/list/list/
*/

#include <list>
#include <stdio.h>

int main(int argc, char** argv)
{
  std::list<int> my_list;
  
  // add values to the back of the list
  for(int i = 0; i < 10; ++i)
    my_list.push_back(i);
  
  // add values to the front of the list
  for(int i = -1; i > -10; --i)
    my_list.push_front(i);
  
  // print out the elements using an iterator
  printf("my_list:");
  for(auto it = my_list.begin(); it != my_list.end(); ++it)
    printf(" %i", *it);
  printf("\n");
    
  // remove all elements from the list
  my_list.clear();
  
  return 0;
}

/*
  NOTE:   Due to the cache available in modern computers,
        the Linked List is almost always slower than other
        data structures.
        
          Cache is the memory local to the CPU itself. When
        data is accessed in RAM, the bytes around the desired
        data are also pulled; this is because it's assumed that
        this other data will soon be referenced. In the case of
        arrays and vectors this works perfectly, as all the data
        is adjacent. In the case of Linked Lists this is bad, as
        the nodes can be anywhere in memory, and each iteration
        to the next node may create a new RAM collection request.
*/
