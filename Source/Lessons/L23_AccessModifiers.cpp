/*
    At any point in the declaration of a struct or class,
  you can declare the following variables and functions
  to be 'public', 'protected', or 'private'. These are
  referred to as 'Access Modifiers' or 'Access Specifiers'.
  
  public    = Anything can use the members
  
  protected = Only the object and those 'inheriting' from
              it can use its members. We'll cover this later
  
  private   = Only the object can use its members
  
    So what's the difference between structs and classes?
  The default access modifier for structs is 'public', and
  the default access modifier for classes is 'private'.
*/

#include <stdio.h>


class Cat
{
  // only the class itself can use 'says'
  const char* says = "Meow";
  
  // anyone can use 'name' and 'Speak'
  public:
    const char* name = "[unnamed]";
    
    void Speak()
    {
      printf("%s says: %s\n", name, says);
    }
};

// We have created a new data type called 'Cat', with
// two variables and a function which can print them
// out.

int main(int argc, char** argv)
{
  Cat my_cat;
  my_cat.name = "Tux";
  my_cat.Speak();
  
  // try to change Cat::says, it generates an error
  //my_cat.says = "Purrrr";
  
  return 0;
}