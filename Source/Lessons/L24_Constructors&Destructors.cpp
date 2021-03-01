/*
    Structs and classes have special types of
  functions, 'Constructors' and 'Destructors'.
  
    Constructors are called when an object is
  created, you can even create different types
  of constructors for different situations, and
  call them as appropriate.
  
    Destructors are called when an object is
  destroyed, usually when the function it's
  created in returns.
*/

#include <stdio.h>


class Cat
{
  public:
    const char* name;
    const char* says;
    
    // this is a 'Default Constructor', it has no arguments.
    // One is always implicitly created, but it does nothing.
    Cat()
    {
      name = "[default]";
      says = "Meow";
    }
    
    // this is a 'Copy Constructor', when you want to duplicate
    // an existing object of the same type
    Cat(const Cat& cat)
    {
      name = "[copy]";
      says = cat.says;
    }
    
    // these are 'Non-Default Constructors', when you have anything
    // else as an argument
    Cat(const char* name_)
    {
      name = name_;
      says = "Meow";
    }
    
    Cat(const char* name_, const char* says_)
    {
      name = name_;
      says = says_;
    }
    
    // this is a destructor
    ~Cat()
    {
      printf("Destructing %s\n", name);
    }
    
    void Speak()
    {
      printf("%s says: %s\n", name, says);
    }
};

int main(int argc, char** argv)
{
  // default constructor
  Cat default_cat;
  default_cat.Speak();
  
  // non-default constructor
  Cat non_default_cat("[non-default]", "Miao");
  non_default_cat.Speak();
  
  // copy constructor
  Cat copy_cat(non_default_cat);
  copy_cat.Speak();
  
  // destructors are called in reverse order
  // as the function returns.
  return 0;
}

/*
  NOTE:   Why are destructors called in reverse order?
        It's because function calls and variables are
        stored upon the 'stack', which is a 'first in, first
        out' structure. Much like a stack of physical items,
        you can add things on top of it, and only the top-most
        item can be removed.
*/