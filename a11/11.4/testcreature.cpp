/*
CH-230-A
a11 p4.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"//self explanatory same thing as previous question
using namespace std;

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

//create an instance of puppy and lizard
    cout<<"creating a puppy"<<endl;
    Puppy a;
    a.color();


    cout<<"Creating a lizard"<<endl;
    Lizard z;
    z.height();

    return 0;
} 