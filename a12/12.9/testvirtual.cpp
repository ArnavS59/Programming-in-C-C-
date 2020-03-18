#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"


string Random(){
string words[]={"RED","VIOLET","BLACK","BLUE"};

    
    string random1;
    random1 = words[rand()%4];
    
return random1;
}



const int num_obj = 7;
int main() {
	

 int n=0;
      srand(static_cast<unsigned int>(time(0)));

  while (n<15)
  {
       cout<< " Random string is "<< Random()<<endl;
       n++;
  }

Area::



















	Area *list[num_obj];						// Creating an array of pointers of 7 elements 
	int index = 0;								// initializing to 0, otherwise it will store some garbage value, we need this for iterating over the list
	double sum_area = 0.0;
	double sum_peri =0.0;						// same thing here intitializing to 0,othertwise stores garbage value
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// supplying parameters to the parametric constructor
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square sq("ORANGE",23,45,6);
	list[0] = &blue_ring;						// storing the blue ring object/instance in the first block of the array[0]
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &sq;
	while (index < num_obj) {					// condition for iterating over the list, we only have 7 elemetns so it will stop at index=7
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// taking the values of area form every shape and storing it into area
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// printing the sum of all areas
	index=0;
while (index < num_obj) {		
				
		(list[index])->getColor();				
		double peri = list[index++]->calcPerimeter();
		sum_peri += peri;
		
	}
	
	cout << "\nThe total perimerter is "
			<< sum_peri << " units " << endl;
	return 0;
}
