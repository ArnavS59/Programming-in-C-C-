/*
CH-230-A
a13 p2.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
class Complex
{

public:
	float real; //two parts of a complex number
	float imag;

public:
	Complex();				   //default const.
	Complex(float, float = 0); //initializing paremter const.
	~Complex();				   //destructutor

	friend std::istream &operator>>(std::istream &, Complex &);

	friend std::ostream &operator<<(std::ostream &, Complex const &);

	friend Complex operator*(Complex const &, Complex const &);

	friend Complex operator+(Complex const &, Complex const &);

	friend Complex operator-(Complex const &, Complex const &);

	void operator=(const Complex &comp) //this has to be here member
	{

		real = comp.real;
		imag = comp.imag;
	}
};
