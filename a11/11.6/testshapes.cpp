
/*
CH-230-A
a11 p6.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/


#include <iostream>
#include "Shapes.h"
using namespace std;

int main(int argc, char **argv)
{

  Circle c("Circle C", 3, 4, 7);
  Rectangle r("Rect R", 1, 1, 3, 4);
  Square s("Square S", 1, 1, 10);


//For cirlce
  cout << "Perimeter of " << c.getName() << " is " << c.perimeter() << " unit " << endl;
  cout << "Area of " << c.getName() << " is " << c.area() << " unit square" << endl<<endl;


//for rectangle
   cout << "Perimeter of " << r.getName() << " is " << r.perimeter() << " unit " << endl;
  cout << "Area of " << r.getName() << " is " << r.area() << " unit square" << endl<<endl;


//for square
   cout << "Perimeter of " << s.getName() << " is " << s.perimeter() << " unit " << endl;
  cout << "Area of " << s.getName() << " is " << s.area() << " unit square " << endl<<endl;


  //checking copy constructor of Rectangle
  Rectangle copy(r);

  cout << "Perimeter of " << copy.getName() << " is " << copy.perimeter() << " unit " << endl;
  cout << "Area of " << copy.getName() << " is " << copy.area() << " unit square " << endl<<endl;


}
