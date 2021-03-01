/*
    There are a number of accessory things you can do with
  structs and classes, which can prove very useful:
  
  delete      = Explicitly remove a function or constructor from
                a class/struct
                
  friend      = Selectively remove the restrictions of access
                modifiers for a single function or class/struct
                
  initializer = Only usable in a constructor, it allows you to
  list          initialize variables and the parent class (if inheriting)
                using their constructors, instead of assignment with '='.
                This is necessary with 'const' variables, as they must
                be assigned on creation.
    
  override    = A term for use with 'virtual'. It tells the compiler we
                want to override a base class'/struct's function. If it
                doesn't find one then it generates a compilation error.
                The use of this term is optional, it is merely a
                declaration of intent.
    
  this        = A pointer to the address of the instance of the class
                or struct we're in. It is an implicit argument to all
                class/struct functions, and is the reason we have to
                call them through an instance, and can't via
                Animal::Attack()
    
  virtual     = Allow inheriting classes/structs to 'override' a
                function, and replace its functionality with their
                own. If a virtual function is set as '= 0' then it
                MUST be overridden.
*/

#include <stdio.h>

// first we create the base class
class Animal
{
  friend const char* GetAnimal(const Animal* animal);
  
  // You can declare a 'friend' class/struct as follows:
  //    friend class Cat;
  
  const char* name;
  
  public:
    // force the use of the non-default constructor
    Animal() = delete;
    
    Animal(const char* name_)
    {
      name = name_;
    }
  
    virtual void Attack()
    {
      printf("Rawr!\n");
    }
  
    virtual void Speak() = 0;
};

const char* GetAnimal(const Animal* animal)
{
  return animal->name;
}

class Cat : public Animal
{
  const char* const color;
  
  public:
    Cat() : Animal("Tux"), color("black and white")
    {
    }
    
    void Speak() override
    {
      printf("%s, the %s cat, Meows\n", GetAnimal(this), color);
    }
};

int main(int argc, char** argv)
{
  Cat my_cat;
  my_cat.Speak();
  my_cat.Attack();
  
  return 0;
}