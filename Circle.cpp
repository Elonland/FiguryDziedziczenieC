#include "Circle.hpp"
#define PI 3.14159265
#include "NegativeNumber.hpp"

Circle::Circle(int a)
{   
    if(a < 0)
        throw NegativeNumber();
    radius = a;
}

int Circle::area()
{
    return radius * radius * PI;
}
int Circle::perimeter()
{
    return 2 * radius * PI;
}
std::string Circle::getNAME()
{
    return "Circle";
}

Circle::~Circle()
{

}