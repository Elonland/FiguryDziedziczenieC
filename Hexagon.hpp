#ifndef Hexagon_H
#define Hexagon_H

#include "Figure.hpp"
#include <string>
class Hexagon : public virtual Figure
{
    private:
    int side;
    public:
    Hexagon(int a);
    virtual int area();
    virtual int perimeter();
    virtual std::string getNAME();
   
    ~Hexagon();
};

#endif