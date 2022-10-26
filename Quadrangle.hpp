#ifndef Quadrangle_H
#define Quadrangle_H

#include "Figure.hpp"

class Quadrangle : public Figure
{
    public:
    int side1;
    int side2;
    int side3;
    int side4;
    int angle;
    virtual ~Quadrangle(){}
};

#endif
