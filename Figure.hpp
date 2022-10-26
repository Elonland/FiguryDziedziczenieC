#ifndef Figure_H
#define Figure_H

#include <string>

class Figure
{
    public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
    virtual std::string getNAME() = 0;
    virtual ~Figure(){}
};

#endif
