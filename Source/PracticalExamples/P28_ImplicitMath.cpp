#include "P28_0_Vector.h"
#include <iostream>

/*
    Here we use a mathematical structure with various overloaded
  operators which make using it much more intuitive. Now instead
  of calling 'q.Subtract(p)' we can just use 'q - p'
*/

int main(int argc, char** argv)
{ 
  Vector p(1.2f, 0.95f);
  Vector q(5.5f, 7.1f);
  
  std::cout << "Point P is: " << p << std::endl;
  std::cout << "Point Q is: " << q << std::endl << std::endl;
  
  // 'pq' is the direction and distance to get from 'p' to 'q',
  // it can be thought of as an arrow from 'p' to 'q'
  Vector pq = q - p;
  
  std::cout << "Vector PQ is: " << pq << std::endl;
  std::cout << "Vector P + PQ should be Q, it is: " << p + pq << std::endl;
  std::cout << "Points P and Q are " << pq.Length() << " units apart" << std::endl;
  
  return 0;
}