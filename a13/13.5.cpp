/*
CH-230-A
a13 p5.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
    A(){x=0;}
    //A(){}; If we did this then 
    //only default constructor of A is called and it doesn't assign any value to X that's why it's printing some garbage value instead of printing 10
    //If the base class has a default constructor, then defining a constructor in derived class is not necessary. The default constructor of base class is automatically called.
//  However there is nothing like virtual constructor. An object must be constructed using a constructor of its class.
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}


