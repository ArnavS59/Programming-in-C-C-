
/*
CH-230-A
a12 p6.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
		        	            // integers. Denominator by default is 1
	void print();	
// prints it to the screen
	friend std::istream& operator >> (std::istream& fracinpiut, Fraction & n);

	friend std::ostream& operator << (std::ostream& fracoutput, Fraction const& n);	
	
	friend Fraction operator * (Fraction const & n1,Fraction const& n2);	
	
	friend Fraction operator / (Fraction const & n1,Fraction const& n2);	
};


#endif /* FRACTION_H_ */