/*
CH-230-A
a12 p8s.[c or cpp or h]
Arnav Singh 
arsingh@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include "Ring.h"


Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {innerradius = inner;}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * 3.14));
}
double Ring::calcPerimeter() const{

std::cout<<" calcPerimeter of Ring..";
return 3.14*(innerradius*innerradius+radius*radius);


}