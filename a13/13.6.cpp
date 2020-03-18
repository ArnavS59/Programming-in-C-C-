
/*
CH-230-A
a11 p3.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <iostream>
using namespace std;


class Creature {
	public:
		Creature();  
        ~Creature();
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
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






class Lizard : public Creature {//created lizard as a derived class

    public:
    Lizard();
    ~Lizard();
    void height() const;//one property height and method 

    protected:
        int height1;
};
Lizard::Lizard(): height1(20)
{
    cout<<"lizard constructor being called";
}

Lizard::~Lizard()
{
    cout<<" Calling lizard destructor";
}

void Lizard::height() const
{
cout<<"Length of the lizard is"<<height1<<endl;
}









class Puppy : public Creature {

    public: 
        Puppy();
        void color() const;// method
        ~Puppy();
    protected:
    string const color1; //color as one property

};

Puppy::Puppy(): color1("Brown")
{
    cout<<" calling puppy constructor";
}

Puppy::~Puppy()
{
    cout<<"calling puppy destructor";
}

void Puppy::color() const
{
    cout<<"color of the puppy is"<<color1<<endl;
}




class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout<<"calling Wizard constructor";
}  

Wizard::~Wizard()
{
    cout<<"calling wizard destructor";
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}










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
    cout<<"creating a puppy";
    Puppy a;
    a.color();


    cout<<"Creating a lizard";
    Lizard z;
    z.height();




    return 0;
} 