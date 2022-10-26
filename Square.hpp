#ifndef Square_H
#define Square_H

#include "Quadrangle.hpp"

class Square : public virtual Quadrangle
{
    public:
    Square(int a);
    virtual int area();
    virtual int perimeter();
    virtual std::string getNAME();
    ~Square();
};

#endif
