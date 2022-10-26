#ifndef Rectangle_H
#define Rectangle_H

#include "Quadrangle.hpp"

class Rectangle : public virtual Quadrangle
{
    public:
    Rectangle(int a, int b);
    virtual int area();
    virtual int perimeter();
    virtual std::string getNAME();
   
    ~Rectangle();
};

#endif