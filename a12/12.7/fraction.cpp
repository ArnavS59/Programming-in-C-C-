/*
CH-230-A
a12 p6.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/


#include <iostream>
#include "fraction.h"
using namespace std;
Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{

	if (a == 0) 
       return b; //recursive fucntion

    if (b == 0) 
       return a; 
   
    
    if (a == b) 
        return a; 
   
    
    if (a > b) 
        return gcd(a-b, b); 


return gcd(a, b-a); 
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

void Fraction::print()
{
	cout << num << "/" << den <<endl;
}

istream& operator>>(istream& fracinput,Fraction & n)//overloading various operators 
{
fracinput>>n.num;
cout<<"/";
fracinput>>n.den;
cout<<endl;
return fracinput;
}

ostream& operator<<(ostream& fracoutput, Fraction const& n)
{
fracoutput<<n.num<<"/"<<n.den<<endl;
return fracoutput;
}

Fraction operator * (Fraction const& n1,Fraction const& n2)
{

Fraction result;

result.num= n1.num* n2.num;
result.den= n1.den* n2.den;

return result;

}

Fraction operator / (Fraction const& n1,Fraction const& n2)
{

Fraction result;

result.num= n1.num* n2.den;
result.den= n1.den* n2.num;

return result;

}



