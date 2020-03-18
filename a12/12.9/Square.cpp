#include <iostream>
#include "Square.h"


Square::Square(const char *n, double a, double b, double side1):Rectangle(n,a,b)
{
side=side1;
}


Square::~Square()
{

}

double Square::calcArea() const
{
std::cout<<"Calc area of Square..";
return side*side;

}

double Square::calcPerimeter()const 
{
std::cout<<"CalcPerimeter of Square... ";
    return 4*side;
}