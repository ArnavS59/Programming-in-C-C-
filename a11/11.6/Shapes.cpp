/*
CH-230-A
a11 p6.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/


// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string &n) : name(n) {}

//Default Constructor
Shape::Shape() : name("Default Shape") {}

Shape::Shape(const Shape &one) : name(one.name) {} // copy constructor

void Shape::printName() const
{
	cout << name << endl;
}

void Shape::setName(const std::string &one)
{
	name = one;
}

string Shape::getName()
{
	return name;
}

CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n)
{
	x = nx;
	y = ny;
}

//Default constructor for shape
CenteredShape::CenteredShape() : Shape("Centered Shape"), x(0), y(0) {}

//Copy Constructor
CenteredShape::CenteredShape(const CenteredShape &one) : Shape(one.name), x(one.x), y(one.y) {}

void CenteredShape::move(double a, double b)
{

	x = a;
	y = b;
}

void CenteredShape::setXY(double xx, double yy)
{
	x = xx;
	y = yy;
}

double CenteredShape::getX()
{
	return x;
}

double CenteredShape::getY()
{
	return y;
}

RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl) : CenteredShape(n, nx, ny)
{
	EdgesNumber = nl;
}

//Default constructor for regular polygon
RegularPolygon::RegularPolygon() : CenteredShape("Regular Polygon", 0, 0), EdgesNumber(0) {}

//Copy Constructor for Polygon
RegularPolygon::RegularPolygon(const RegularPolygon &one) : CenteredShape(one.name, one.x, one.y),
															EdgesNumber(one.EdgesNumber) {}

void RegularPolygon::setEdgeNum(int one)
{
	EdgesNumber = one;
}

int RegularPolygon::getEdgeNum()
{
	return EdgesNumber;
}

Circle::Circle(const string &n, double nx, double ny, double r) : CenteredShape(n, nx, ny)
{
	Radius = r;
}

//Default constructor for circle
Circle::Circle() : CenteredShape("Default Circle", 0, 0), Radius(0) {}
//Copy constructor for circle
Circle::Circle(const Circle &one) : CenteredShape(one.name, one.x, one.y),
									Radius(one.Radius) {}

void Circle::setRadius(double one)
{
	Radius = one;
}

double Circle::getRadius()
{
	return Radius;
}

double Circle::perimeter()
{
	return 2 * 3.14 * Radius;
}
double Circle::area()
{
	return 3.14 * Radius * Radius;
}

Rectangle::Rectangle(const std::string &n, double nx, double ny,
					 double nwidth, double nheight) : RegularPolygon(n, nx, ny, 4),
													  width(nwidth), height(nheight) {}

Rectangle::Rectangle() : RegularPolygon("Default Rectangle", 0, 0, 4), width(0), height(0) {}

Rectangle::Rectangle(const Rectangle &one)
	: RegularPolygon(one.name, one.x, one.y, one.EdgesNumber),
	  width(one.width), height(one.height) {}

void Rectangle::setSides(double hh, double ww)
{
	height = hh;
	width = ww;
}
double Rectangle::getHeight()
{
	return height;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::perimeter()
{
	return 2*(width + height);
}

double Rectangle::area()
{
	return width * height;
}

Square::Square() : Rectangle("Square", 0, 0, 0, 0) {}

Square::Square(const std::string &n, double nx, double ny, double nside) : Rectangle(n, nx, ny, nside, nside) {}
Square::Square(const Square &one) : Rectangle(one.name, one.x, one.y, one.height,one.height) {}

double Square::getSide()
{
	return width; // or height
}

void Square::setSide(double si)
{
	height = si;
	width = si;
}