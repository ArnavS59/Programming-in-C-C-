/*
CH-230-A
a12 p5.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;

string Random(){
    string words[]={"RED","VIOLET","BLACK","BLUE"};
    string random1;
    random1 = words[rand()%4];
    
return random1;
}


int main()
{
 int n=0;
      srand(static_cast<unsigned int>(time(0)));

  while (n<15)
  {
       cout<< " Random string is "<< Random()<<endl;//calling the function 15 times 
       n++;
  }
  


return 0;
}