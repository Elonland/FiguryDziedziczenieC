#ifndef Pentagon_H
#define Pentagon_H
#include "Figure.hpp"

class Pentagon : public virtual Figure
{
    private:
    int side;
    public:
    Pentagon(int a);
    virtual int area();
    virtual int perimeter();
    virtual std::string getNAME();
   
    ~Pentagon();
};

#endif