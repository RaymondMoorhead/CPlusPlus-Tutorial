/*
    The way to bring multiple variables and functions
  together, to create the 'objects' of Object Oriented
  Programming, is via 'structs' and 'classes'.
  
    These variables and functions are 'members' of the
  struct or class they are in, and any instances of the
  object you create will have its own instances of those
  variables. The functions do not belong to a particular
  instance, but are instead tied to the struct or class
  as a data type- however they must be called through an
  instance for reasons we'll cover later.
*/

#include <stdio.h>


struct Cat
{
  const char* name = "[unnamed]";
  const char* says = "Meow";
  
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
  // let's create a cat and name it 'Tux',
  // we can access the variables and functions of structs
  // and classes using the '.' operator;
  Cat my_cat;
  my_cat.name = "Tux";
  my_cat.Speak();
  
  // we can also use pointers and references
  Cat* my_cat_p = &my_cat;
  
  // doing this can get annoying...
  (*my_cat_p).Speak();
  
  // ...so you can use the '->' operator instead for
  // struct/class pointers
  my_cat_p->says = "Purrrr";
  my_cat_p->Speak();
  
  return 0;
}

/*
  NOTE:   We'll get into classes when we talk about
        access modifiers, but for all intents and
        purposes they're exactly like structs.
*/