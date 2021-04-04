/*
    It is good practice to replicate code as little as possible, if
  something is written N times as part of its definition, that's
  N opportunites for a typo or other mistake. This cannot always be
  avoided, but here is a work-around using the pre-processor.

    In this example we want to create a bunch of Animals, and each one
  requires their name in the enumeration 'Animal', their name again as
  a c-style string in 'AnimalNames', and a case for what noise they
  make in the 'AnimalNoise' function. It would be very easy to forget
  to add one of these instances, or add it incorrectly, so here instead
  we create a single list of names and noises in 'P19_0_Animals.h' and
  use the pre-processor to convert the information into what we need.
*/

enum Animal
{
  #define ANIMAL(Name, Unused) Name,
    #include "P19_0_Animals.h"
  #undef ANIMAL
  NumberOfAnimals
};

const char* AnimalNames[] {
  #define ANIMAL(Name, Unused) #Name,
    #include "P19_0_Animals.h"
  #undef ANIMAL
  "InvalidAnimalNamesIndex"
};

const char* AnimalNoise(Animal animal)
{
  #define ANIMAL(Name, Noise) case Animal::Name: return #Noise;
  
  switch(animal)
  {
    #include "P19_0_Animals.h"
    default:
      return "Unkown Noise";
  }
  
  #undef ANIMAL
}

#include <stdio.h>

int main(int argc, char** argv)
{
  printf("We know of %i animals, they are as follows:\n", int(NumberOfAnimals));
  for(int i = 0; i < int(NumberOfAnimals); ++i)
    printf("\t%s which makes the noise: %s\n", AnimalNames[i], AnimalNoise(Animal(i)));
  return 0;
}

// feel free to add more entries to 'P19_0_Animals.h' and try this for yourself
