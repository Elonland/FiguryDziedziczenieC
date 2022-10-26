#include "Rombus.hpp"
#include "Quadrangle.hpp"
#include "WrongData.hpp"
#include <math.h> 
#define PI 3.14159265
#include "NegativeNumber.hpp"
Rombus::Rombus(int a, int b)
{
    if(a < 0 || b < 0)
        throw NegativeNumber();
    if((b >= a && b < 180) || (b <= a && a > 180 && b < 180))
    {
        side1 = a;
        angle = b;   
    }
    else if((b > a && b > 180 && a < 180) || (b < a && a < 180))
    {
        side1 = b;
        angle = a;
    }
    else
        throw WrongData();
        //zle dane
    
}

int Rombus::area()
{
    return side1 * side1 * sin(angle * PI/180);
}
int Rombus::perimeter()
{
    return 4*side1;
}
std::string Rombus::getNAME()
{
    return "Rombus";
}

Rombus::~Rombus()
{

}