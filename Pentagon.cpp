#include "Pentagon.hpp"
#define Constant 1.72048
#include "NegativeNumber.hpp"
Pentagon::Pentagon(int a)
{
    if(a < 0)
        throw NegativeNumber();
    side = a;
}

int Pentagon::area()
{
    return side * side * Constant;
}
int Pentagon::perimeter()
{
    return 5 * side;
}
std::string Pentagon::getNAME()
{
    return "Pentagon";
}

Pentagon::~Pentagon()
{

}