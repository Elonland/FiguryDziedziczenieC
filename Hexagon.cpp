#include "Hexagon.hpp"
#define Constant 2.59808
#include "NegativeNumber.hpp"
Hexagon::Hexagon(int a)
{
    if(a < 0)
        throw NegativeNumber();
    side = a;
}

int Hexagon::area()
{
    return side * side * Constant;
}
int Hexagon::perimeter()
{
    return 6 * side;
}
std::string Hexagon::getNAME()
{
    return "Hexagon";
}

Hexagon::~Hexagon()
{

}