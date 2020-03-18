/*
CH-230-A
a13 p2.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Complex.h"

using namespace std; // for cout

Complex::Complex()
{ // sets everything to 0
	real = imag = 0;
}
Complex::Complex(float r, float i)
{			  // initializes it to a given couple.
			  // Please note that here it is
	real = r; // not necessary to replicate the default value for the second parameter
	imag = i;
}

Complex::~Complex()
{
}

istream &operator>>(istream &complexinput, Complex &n)//ovcerloading operators 
{
	cout << endl;
	complexinput >> n.real;
	cout << endl;
	complexinput >> n.imag;
	cout << endl;
	return complexinput;
}

ostream &operator<<(ostream &complexoutput, Complex const &n)
{
	complexoutput << "Required complex number is: " << n.real << "+i(" << n.imag << ")" << endl;
	return complexoutput;
}

Complex operator*(Complex const &comp1, Complex const &comp2)
{

	Complex result;
	result.real = (comp1.real * comp2.real) - (comp1.imag * comp2.imag); //multiplication formula
	result.imag = (comp1.real * comp2.imag) + (comp1.imag * comp2.real);

	return result;
}

Complex operator+(Complex const &comp1, Complex const &comp2)
{

	Complex result;
	result.real = comp1.real + comp2.real; //x.real correspnds to c2 and real is the real part of c1
	result.imag = comp1.imag + comp2.imag; //same here
	return result;
}

Complex operator-(Complex const &comp1, Complex const &comp2)
{

	Complex result;
	result.real = comp1.real - comp2.real; //same logic
	result.imag = comp1.imag - comp2.imag;
	return result;
}
