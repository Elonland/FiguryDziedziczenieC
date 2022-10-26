#include "Square.hpp"
#include "Quadrangle.hpp"
#include "NegativeNumber.hpp"
Square::Square(int a)
{
    if(a < 0)
        throw NegativeNumber();
    side1 = a;
}

int Square::area()
{
    return side1 * side1;
}
int Square::perimeter()
{
    return 4*side1;
}
std::string Square::getNAME()
{
    return "Square";
}

Square::~Square()
{

}
