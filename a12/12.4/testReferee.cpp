
#include <string>
#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(void)
{
string s;
TournamentMember a("arnav","singh","05-09-2001",182.5,80);
a.setlocat("The location is: India\n");
cout<<a.getlocat();
a.print();
TournamentMember b("Anish","Gosh","16-09-2001",105,212);
b.print();
TournamentMember c(b);
c.print();
Player g("arnav","singh","05-09-2001",182.5,80,1,100,11,"Right-footed");
g.printp();
Referee d.("John","do","5-09-2001",20,100,0,0)
d.addToYellowCardList(&a);
d.addToYellowCardList(&a);

}
