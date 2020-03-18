/*
CH-230-A
a13 4.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
void print() { cout << x; } 
};
 
class B:  virtual public A //so basically the idea is we have to add virtual while inherting from a base class
//cuz otherwise two copies of the same print function will pass to D so it will give ambiguity 
//this is also sometimes known as diamond inheritence, virtual ensures only one is being inherited by D
{
public:
  B()  { setX(10); }
 
};
 
class C: virtual public A  
{
public:
  C()  { setX(20); }

};
 
class D: public B, public C {
 
};
 
int main()
{
    D d;
    d.print();
    return 0;
}