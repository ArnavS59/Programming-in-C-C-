/*
CH-230-A
a10 p4.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
 
#include <iostream>
#include <cstdlib>
#include "Persons.h"
#include <cmath>


using namespace std;
 
int main(void)
{
    Person a("Brown",'B',80,172,18.2);//object defining
    Person b("Green",'C',71,181,23.4);
    Person c("Black",'Y',100,190,28.7);







 /*
    A.setEyecolor("Blue");//setting values for object A
    A.setHaircolor('o');
    A.setHeight(170);
    A.setWeight(68);
    A.setBMI(170,68);
 
    B.setEyecolor("Green");//for B
    B.setHaircolor('b');
    B.setHeight(182);
    B.setWeight(70);
    B.setBMI(182,70);
 
    C.setEyecolor("Orange");//now C
    C.setHaircolor('l');
    C.setHeight(200);
    C.setWeight(100);
    C.setBMI(100,200);
 */
   a.print();//prinitng
   b.print();
   c.print();
 
return 0;
}