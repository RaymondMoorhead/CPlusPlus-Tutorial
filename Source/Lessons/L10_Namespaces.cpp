/*
    Namespaces are a way to organize data so that it isn't accidentally
  accessed, duplicated, overridden etc. This can easily occur when code
  from many different sources is included into a file. Here we'll use a
  function with the same name in three different 'locations'
*/

// this is in the 'global scope'
int FavoriteNumber()
{
  return 1;
}

namespace my_namespace
{
  // inside the 'scope' of 'my_namespace'
  int FavoriteNumber()
  {
    return 2;
  }

  namespace my_inner_namespace
  {
    // inside the 'scope' of 'my_inner_namespace',
    // which is in the scope of 'my_namespace'
    int FavoriteNumber()
    {
      return 3;
    }
  }
}

#include <iostream>

int main(int argc, char** argv)
{
  // these will access the global scope function
  std::cout << "Calling FavoriteNumber() yields: " << FavoriteNumber() << std::endl;
  std::cout << "Calling ::FavoriteNumber() yields: " << ::FavoriteNumber() << std::endl;
  
  // this will get the my_namespace function
  std::cout << "Calling my_namespace::FavoriteNumber() yields: " << my_namespace::FavoriteNumber() << std::endl;
  
  // this will get the my_inner_namespace function
  std::cout << "Calling my_namespace::my_inner_namespace::FavoriteNumber() yields: " << my_namespace::my_inner_namespace::FavoriteNumber() << std::endl;
  
  // You can add this statement, and afterwards your
  // code will attempt to add the given namespace to
  // everything.
  using namespace my_namespace;
  
  // this is dangerous though, as it adds ambiguity
  // for what you're going to get, 'FavoriteNumber()'
  // or 'my_namespace::FavoriteNumber()'. As such,
  // the 'using namespace' functionality should not
  // be applied freely.
  
  return 0;
}