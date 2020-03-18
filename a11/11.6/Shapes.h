/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape
{					  // base class
protected:			  // using protected for copy constructor
	std::string name; // every shape will have a name
public:
	Shape(const std::string &); // builds a shape with a name
	Shape();					// empty shape
	Shape(const Shape &);		// copy constructor
	void printName() const;		// prints the name

	std::string getName();
	void setName(const std::string &);
};

class CenteredShape : public Shape
{ // inherits from Shape
protected:
	double x, y; // the center of the shape
public:
	CenteredShape(const std::string &, double, double); // usual three constructors
	CenteredShape();
	CenteredShape(const CenteredShape &);

	double getX();
	double getY();
	void setXY(double, double);

	void move(double, double); // moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape
{ // a regular polygon is a centered_shape with a number of edges
protected:
	int EdgesNumber;

public:
	int getEdgeNum();
	void setEdgeNum(int);

	RegularPolygon(const std::string &, double, double, int);
	RegularPolygon();
	RegularPolygon(const RegularPolygon &);
};

class Circle : public CenteredShape
{ // a Circle is a shape with a center and a radius
private:
	double Radius;

public:
	double getRadius();
	void setRadius(double);
	double perimeter();
	double area();

	Circle(const std::string &, double, double, double);
	Circle();
	Circle(const Circle &);
};

class Rectangle : public RegularPolygon
{ //Inhertis from RegularPolygon
protected:
	double width;
	double height;

public:
	double getHeight();
	double getWidth();
	void setSides(double, double);

	double perimeter(); //same for square
	double area();

	Rectangle(const std::string &n, double nx, double ny, double nwidth,
			  double nheight);
	Rectangle();
	Rectangle(const Rectangle &);
};

class Square : public Rectangle
{ //Inherits from Square

	// private:
	// 	double nside;
	//nside is rect height=width

public:
	double getSide();
	void setSide(double);
	Square();
	Square(const std::string &n, double nx, double ny, double nside);
	Square(const Square &);
};
#endif
