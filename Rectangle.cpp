#include "Rectangle.hpp"
#include "Quadrangle.hpp"
#include "NegativeNumber.hpp"
Rectangle::Rectangle(int a, int b)
{
    if(a < 0 || b < 0)
        throw NegativeNumber();
    side1 = a;
    side2 = b;
}

int Rectangle::area()
{
    return side1 * side2;
}
int Rectangle::perimeter()
{
    return 2*side1 + 2*side2;
}
std::string Rectangle::getNAME()
{
    return "Rectangle";
}

Rectangle::~Rectangle()
{

}