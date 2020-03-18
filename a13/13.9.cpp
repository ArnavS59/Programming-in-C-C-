/*
CH-230-A
a13 p9.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <exception>

using namespace std;

class Motor
{
public:
    Motor()
    {
        throw "This motor has problems";
    }
};

class Car : public Motor
{
    public:
    Car():Motor(){};
};

class Garage 
{
public:
    Garage()
    {
        try
        {
            Car any;
        }

        catch (const char *a)
        {
            cerr <<"Caught in Garage: Error in motor"<< endl;
        }
         throw("The car in this garage has problems with the motor");
    }
   
};

int main()
{
    try
    {
        Garage anything;
    }
    catch (const char *ab)
    {
        cerr << "Caught in main: " << ab << endl;
    }

    return 0;
}