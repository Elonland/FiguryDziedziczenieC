#ifndef Circle_H
#define Circle_H

#include "Figure.hpp"
class Circle : public virtual Figure
{
    private:
    int radius;
    public:
    Circle(int a);
    virtual int area();
    virtual int perimeter();
    virtual std::string getNAME();
   
    ~Circle();
};

#endif