/*
    Every variable we've seen so far has been allocated
  on the 'stack', meaning that it has a direct association
  with the function it is in. These 'local variables' are
  created when the function is entered, and destroyed when
  the function returns. What if we want something to persist
  outside of this 'scope'?
  
    Using either 'malloc' and 'free' from C, or 'new' and
  'delete' from C++, we can instead allocate our variables
  on the 'heap'. The 'heap' exists for the lifetime of our
  program. Since the heap lasts for the full duration, we
  are responsible for freeing/deleting any allocated memory
  we no longer need. The failure to do this is called a
  'memory leak', and it is often the reason why programs
  continue to bloat the longer they run.
*/

#include <iostream>  // cout, endl
#include <stdlib.h>   // malloc, free

// 'new' and 'delete' are part of C++, and don't need to be included

int main(int argc, char** argv)
{
  int* my_malloc_int;
  int* my_new_int;

    
  // 'malloc' returns a 'void*' to the allocated memory on the heap.
  // So we have to 'cast' it to the type we need. Here we use a
  // c-style cast, with the type in parenthesis
  my_malloc_int = (int*)malloc(sizeof(int));
    
  // 'sizeof' is a special preprocessor function that returns the
  // number of bytes a type is composed of
  
  *my_malloc_int = 5;
  
  // now we'll do the same thing using C++'s 'new' and command
  my_new_int = new int;
  
  *my_new_int = 7;
  
  // let's print out some test data
  std::cout << "my_malloc_int is located at " << my_malloc_int << " and *my_malloc_int is " << *my_malloc_int << std::endl;
  std::cout << "my_new_int is located at " << my_new_int << " and  *my_new_int is " << *my_new_int << std::endl;
  
  // now we're done with the memory, and we return it to the
  // operating system
  
  // for 'malloc' allocations, use 'free'
  free(my_malloc_int);
  
  // for 'new' allocations, use 'delete'
  delete my_new_int;
}

/*
  NOTE:   There are some VERY important reasons why you would use
        'new' over 'malloc' or visa versa. We'll revisit this in
        the lesson on 'Struct&ClassExtras', because other things
        must be covered first.
        
          For now just know that using 'new' is "more correct"
*/