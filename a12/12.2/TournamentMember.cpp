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



TournamentMember::TournamentMember(){

}
TournamentMember::~TournamentMember(){
cout<<"Destrucuctor is being called"<<endl;
}


TournamentMember::TournamentMember(const char fname1[36], const char sname1[36], const char dob1[11],float height1,int weight1)
{
    cout<<endl;
   cout<<"constructor is being called"<<endl;
    height=height1;
    weight=weight1;

    for (int i = 0; i <=36; i++)
  {
    firstname[i]=fname1[i];
  }
  for (int i = 0; i <=36; i++)
  {
    secondname[i]=sname1[i];
  }
  for (int i = 0; i <=11; i++)
  {
    dob[i]=dob1[i];
  }
  
   
}

string TournamentMember::location;



TournamentMember::TournamentMember(const TournamentMember& a)
{
   cout<<"copy constructor is being called"<<endl;
  weight=a.weight;
  height=a.height;

  for (int i = 0; i <=36; i++)
  {
    firstname[i]=a.firstname[i];
  }
  for (int i = 0; i <=36; i++)
  {
    secondname[i]=a.secondname[i];
  }
  for (int i = 0; i <=11; i++)
  {
   dob[i]=a.dob[i];
  }
  
 


}

void TournamentMember::print()
{
cout<<endl;//printing
cout<<"firstname is: "<<firstname<<endl<<"second name is: "<<secondname<<endl<<"dob is: "<<dob<<endl;
cout<<"weight: "<<weight<<endl<<"height is "<<height<<endl;

}