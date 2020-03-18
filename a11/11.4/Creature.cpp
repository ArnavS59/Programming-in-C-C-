
/*
CH-230-A
a11 p2.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;


Creature::Creature(): distance(10)//self explanatory same thing as previous question
{
cout<<"constructor being  called"<<endl;
}    

Creature::~Creature()
{
cout<<" destructor being called"<<endl;
}

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  




Lizard::Lizard(): height1(20)
{
    cout<<"lizard constructor being called"<<endl;
}

Lizard::~Lizard()
{
    cout<<" Calling lizard destructor"<<endl;
}

void Lizard::height() const
{
cout<<"Length of the lizard is"<<height1<<endl;
}





Puppy::Puppy(): color1("Brown")
{
    cout<<" calling puppy constructor"<<endl;
}

Puppy::~Puppy()
{
    cout<<"calling puppy destructor"<<endl;
}

void Puppy::color() const
{
    cout<<"color of the puppy is"<<color1<<endl;
}




Wizard::Wizard() : distFactor(3)
{
    cout<<"calling Wizard constructor"<<endl;
}  

Wizard::~Wizard()
{
    cout<<"calling wizard destructor"<<endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}








