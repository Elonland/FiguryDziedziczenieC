#ifndef Rombus_H
#define Rombus_H

#include "Quadrangle.hpp"

class Rombus : public virtual Quadrangle
{
    public:
    Rombus(int a, int b);
    virtual int area();
    virtual int perimeter();
    virtual std::string getNAME();
   
    ~Rombus();
};

#endif