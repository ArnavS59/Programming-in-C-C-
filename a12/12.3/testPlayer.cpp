/*
CH-230-A
a12 p3.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <string>
#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(void)
{
string s;
TournamentMember a("Arnav","Singh","05-09-2001",182.5,80);
a.setlocat("The location is: India\n");//setting the location 
cout<<a.getlocat();
a.print();
TournamentMember b("Mahiem","Agarwal","16-09-2001",105,212);
b.print();
TournamentMember c(b);//copy constructor
c.print();
Player g("Cristiano","Ronaldo","05-09-2001",182.5,80,1,100,11,"Right-footed");
g.printp();
g.addgoals();//incrementing number of goals

}
