#pragma once

#include <ostream>

/*
    A mathematical vector is a direction and magnitude which can be used
  to affect positions in space, as well as other vectors. It can be thought
  of as an arrow from (0,0) to (x,y).
  
    Mathematical vectors are fundamental to many physics based operations,
  especially in video games.
  
    Here I use Vectors and Points using the same structure, but a proper math
  library would separate them and have them inherit from a 'Coordinate' base
  class, to make sure they are used only in the proper way.
*/
struct Vector
{
  public:
    Vector();
    Vector(const Vector& rhs);
    Vector(float x, float y);
    
    float x;
    float y;
    
    // quickly change the Vector's values: my_vec(1, 2)
    Vector& operator()(float x, float y);
    
    // assign one Vector to another
    Vector& operator=(Vector rhs);
  
    
    Vector& operator+=(Vector rhs);
    Vector& operator-=(Vector rhs);
    Vector& operator*=(float scalar);
  
    // reverse the Vector
    Vector operator-() const;
  
    // Compare two Vectors to see if they are the same.
    bool operator==(Vector rhs) const;
  
    Vector operator+(Vector rhs) const;
    Vector operator-(Vector rhs) const;
    Vector operator*(float scalar) const;
    
    // dot product of two Vectors
    float operator*(Vector rhs) const; // dot product
    
    // calculate the magnitude of the Vector, its length
    float Length(void) const;
    
  private:
    
    // print out the Vector
    friend std::ostream& operator<<(std::ostream& os, const Vector& vec);
};