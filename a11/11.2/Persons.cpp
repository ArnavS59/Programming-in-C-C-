
/*
CH-230-A
a10 p4.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include<iostream>
#include "Persons.h"
#include <cmath>
using namespace std;


Person::Person()
{

}

Person::~Person()
{
cout<<"destructor being called"<<endl;
}

Person::Person(string const& eyecolor1,char const& haircolor1,int const& weight1,int const& height1,float const& BMI1)
{
eyecolor=eyecolor1;
haircolor=haircolor1;
height=height1;
weight=weight1;
BMI=BMI1;
}

void Person::print()
{
    cout<<"Eye color is "<<eyecolor<<endl;
    cout<<"Weight is "<<weight<<endl;
    cout<<"hair color is "<<haircolor<<endl;
    cout<<"Height is "<<height<<endl;
    cout<<"BMI is therfore"<<BMI<<endl;
    

}
Person::Person(Person& n)
{

eyecolor=n.eyecolor;
haircolor=n.haircolor;
height=n.height;
weight=n.weight;
BMI=n.BMI;
cout<<"copy constructor being called"<<endl;
}




/*
void Person::setEyecolor(string const& neweyecolor)
{
    eyecolor=neweyecolor;
}

void Person::setHaircolor(char const& newhaircolor)
{
    haircolor=newhaircolor;
}

void Person::setHeight(int newheight)
{
    height=newheight;
}

void Person::setWeight(int newweight)
{
    weight=newweight;
}


void Person::setBMI(int newheight,int newweight)//created a BMI setter
{
//  BMI= (float)(newweight*703)/(newheight*newheight);
//}*/
