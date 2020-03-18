/*
CH-230-A
a13 p2.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"
#include <fstream>
using namespace std;

int main()
{
	Complex c1;
	Complex c2;
	Complex c3;
	ifstream input;
	ifstream input2;
	ofstream output;
	input.open("in1.txt");
	input2.open("in2.txt");

	// according to question criteria format

	//while loop to input output for entire loop
	while (!input.eof())
	{
		input >> c1;

		// reading everything
	}

	while (!input2.eof())
	{
		input2 >> c2;

		// reading everything
	}

	output.open("output.txt"); //printing everything in the output file 
	c3 = c1 + c2;
	output << "Adding the two complex numbers" << endl;
	output << c1 + c2;
	cout << endl;
	output << "Multiplying the two complex numbers" << endl;
	output << c1 * c2;
	output << "Subtracting the two complex numbers" << endl;
	output << c1 - c2;
	output << "Assigning to c3" << endl;
	output << c3;

	//printing in  the main screen 
	cout << "Adding the two complex numbers" << endl;
	cout << c1 + c2;
	cout << endl;
	cout << "Multiplying the two complex numbers" << endl;
	cout << c1 * c2;
	cout << "Subtracting the two complex numbers" << endl;
	cout << c1 - c2;
	cout << "Assigning to c3" << endl;
	cout << c3;
	
	

	output.close(); //closing all files opened
	input.close();
	input2.close();

	return 0;
}