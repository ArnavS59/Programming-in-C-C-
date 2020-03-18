#include <iostream>
#include <string>
#include <exception>
using namespace std;

class Ownexception : public exception
{
public:
    const char*  what() { return "Ownexception"; }//ownexception derived from the exception class
};

void func(int x)
{
    switch (x)
    {
    case 1:
        throw 'a';
        break;
    case 2:
        throw 12;
        break;
    case 3:
        throw true;
        break;
    default:
        throw Ownexception();//throwing own exception 
    }
}

int main()
{
        try
        {
            func(1);
        }
        catch (char ch)
        {
            cerr << "Caught in main: " << ch << endl;
        }
        try
        {
            func(2);
        }
        catch (int a)
        {
            cerr << "Caught in main: " << a  << endl;
        }
        try
        {
            func(3);
        }
        catch (bool a)
        {
            cerr << "Caught in main: " << a << endl;
        }
        try
        {
            func (4);
        }
        catch (Ownexception a)
        {
            cerr << "Caught in main: " << a.what() << endl;
        }
        return 0;
    }