
#include <iostream>
#include "Shapes.h"
using namespace std; 

int main(){

Hexagon a("The first one", 1,1,1,9,"Blue");
a.print();
Hexagon b("The second one", 1,1,1,15,"Green");
b.print();
Hexagon c(b);
c.print();


return 0;
}