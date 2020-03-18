/*
CH-230-A
a12 p2.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/


#include <string>
#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(void)
{

TournamentMember a("Arnav","Singh","05-09-2001",182.5,80);
a.setlocat("Location is: Germany");
cout<<a.getlocat();
a.print();
TournamentMember b("Mahiem","Agrawal","16-09-2001",105,212);
b.print();
TournamentMember c(b);
c.print();



}