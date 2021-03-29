/*
    You can 'inherit' from a 'base class' or struct
  to add additional features to an existing type.
*/

#include <stdio.h>

// first we create the base class
class Animal
{
  // we use protected here, so any inheriting classes/structs
  // can use these (as well as Animal itself), but nobody else can.
  protected:
    const char* name;
    const char* says;
  
  public:
  
    virtual void Speak()
    {
      printf("%s says %s\n", name, says);
    }
};

// you should declare how you wish to use the base class,
// generally you will use it publicly
class Cat : public Animal
{
  public:
    Cat()
    {
      name = "Tux";
      says = "Meow";
    }
};

int main(int argc, char** argv)
{
  Cat my_cat;
  my_cat.Speak();
  
  return 0;
}