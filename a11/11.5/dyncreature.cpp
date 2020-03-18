/*
CH-230-A
a11p5.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;

int main()
{ 

do
{
    string input;
    getline(cin,input);
    
    if (input=="Wizard")
    {
        cout << "Creating a Wizard.\n";
        Wizard* w;
        w= new Wizard; 
        w->run();
        w->hover();
        delete w;
        
    }
    else if (input=="Puppy")//as per question requirements 
    {
        cout<<"creating a puppy"<<endl;
        Puppy* p;
        p= new Puppy;
        p->color();
        delete p;
        
     }
    else if (input=="Lizard")//as per question requirements 
    {
        
        cout<<"Creating a lizard"<<endl;
        Lizard *z;
        z= new Lizard;
        z->height();
        delete z;    
        
    }
    
    else if(input=="quit")
    {
    
        break;
    }
    else 
    {
        cout<<"Wrong input enter again"<<endl;
        break;
    }
    
}while(1);
    return 0;
} 

