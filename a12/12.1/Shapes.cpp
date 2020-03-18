// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}
Shape::Shape(const Shape&obj)
{
	name=obj.name;
}
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
CenteredShape::CenteredShape(const CenteredShape&obj):Shape(obj)
{
	x=obj.x;
	y=obj.y;
}
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}
RegularPolygon::RegularPolygon(const RegularPolygon&obj):CenteredShape(obj){
	EdgesNumber=obj.EdgesNumber;
}
Hexagon::Hexagon(const Hexagon& a):RegularPolygon(a)
{
	color=a.color;
	side=a.side;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}





Hexagon::Hexagon(const string& n, double nx, double ny, int nl, int nsid,const string& ncol ):
    RegularPolygon(n,nx,ny,nl)
{

	side=nsid;
	color=ncol;

}


Hexagon::~Hexagon(){
cout<<"Destructor being called"<<endl;

}



void Hexagon::setSide(int side1)
{
	side1=side;
}

int Hexagon::getSide() const{

	return side;
}

void Hexagon::setColor(const string& ncolor)
{
	color=ncolor;
}

string Hexagon::getColor() const
{
	return color;
}




double Hexagon::Perimeter(){
return 6*side;

}


double Hexagon::Area(){

return 1.5*sqrt(3)*side*side;

}

void Hexagon::print(){

cout<<" The color is "<<color;
cout<<"The area is "<<Area()<<endl;
cout<<" The Perimeter is "<<Perimeter()<<endl;

}