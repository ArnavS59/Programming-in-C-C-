/*
CH-230-A
a11 p1.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Box.h"

using namespace std;

Box::Box()
{
height=0;
width=0;
depth=0;//default constr.
}

Box::Box(Box& a)
{
height= a.height;//copy constructor
width= a.width;
depth=a.depth;
}


Box::~Box()//destructor
{
cout<<"destructor being called"<<endl;
}

Box::Box(double height1, double width1, double depth1)
{
    height=height1;
    width=width1;
    depth=depth1;
}


void Box::setHeight(double height1)//setting 
{
    height=height1;
}
void Box::setWidth(double width1)
{
    width=width1;
}
void Box::setDepth(double depth1)
{
    depth=depth1;
}

double Box::getHeight()//get
{
    return height;
}

double Box::getWidth(){
    return width;
}

double Box::getDepth(){
    return depth;
}

void Box::print()//printing volume
{
cout<< "Volune of Box is: "<<height*width*depth<<endl;
}


