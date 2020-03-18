#include <iostream>
#include "creature.h"
using namespace std;

int main()
{ 
string input;
while (input!="quit")
{
    if (input=="Wizard")
    {
        cout << "Creating a Wizard.\n";
        Wizard *wiz;
        wiz= new Wizard w; 
        w.run();
        w.hover();
        delete []wiz;
    }
    else if (input=="Puppy")
    {
        cout<<"creating a puppy"<<endl;
        Puppy *pup;
        pup= new Puppy a;
        a.color();
        delete []pup;
     }
    else if (input=="Lizard")
    {
        
        cout<<"Creating a lizard"<<endl;
        Lizard *liz;
        liz= new Lizard z;
        z.height;
        delete []liz;    
    }
    else 
    {
        cout<<"Wrong Input"<<endl;
    }
    
    
    
}

    /*
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
*/
    return 0;
} 