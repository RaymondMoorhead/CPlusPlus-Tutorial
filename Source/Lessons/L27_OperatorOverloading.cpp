/*
    One of the most powerful features in C++ is
  'operator overloading', and it allows you to tell
  the compiler how to use operators with your struct
  or class. In other words:
  
    // the compiler knows how to add integers
      int i = 2 + 3;
      
    // it doesn't know how to add Cats
      Cat tux = fluffy + furball;
      
    // so we tell it how
*/

#include <stdio.h>

struct Cat
{
  const char* name;
  float fluffyness;
  float attitude;
  
  Cat(const char* name_, float fluffyness_ = 0.0f, float attitude_ = 0.0f) : name(name_), fluffyness(fluffyness_), attitude(attitude_)
  {
  }

  // tux + fluffy
  Cat operator+(const Cat& rhs)
  {
    return Cat("no-name",
               (fluffyness + rhs.fluffyness) / 2.0f,
               (attitude + rhs.attitude) / 2.0f);
  }

  // tux = fluffy
  Cat& operator=(const Cat& rhs)
  {
    fluffyness = rhs.fluffyness;
    attitude = rhs.attitude;
    return *this;
  }
  
  // tux()
  void operator()()
  {
    printf("\t%s has a fluffyness of %f, and an attitude of %f\n", name, fluffyness, attitude);
  }
};

int main(int argc, char** argv)
{
  Cat fluffy("fluffy", 1.0f, 0.4f);
  Cat furball("furball", 0.6f, 0.7f);
  
  Cat tux("tux");
  tux = fluffy + furball;
  
  fluffy();
  furball();
  tux();
  
  return 0;
}

/*
  NOTE:   'rhs' and 'lhs' are common terms for 'right-hand side'
        and 'left-hand side'
        
  NOTE:   There are many different operators which can be overloaded,
        including [], <, ||, !, *, and more. Wikipedia has a nice
        list of the possibilities:
          https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B
*/