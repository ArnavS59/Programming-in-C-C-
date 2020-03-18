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
cout<<endl;
cout<<"firstname is: "<<firstname<<endl<<"second name is: "<<secondname<<endl<<"dob is: "<<dob<<endl;
cout<<"weight: "<<weight<<endl<<"height is "<<height<<endl;

}


Player::Player()
{


}

Player::~Player()
{
cout<<"Destrucuctor is being called"<<endl;
}



Player::Player(const Player& a)
{
    cout<<"copy constructor is being called"<<endl;//copy constructor
    position=a.position;
    goals=a.goals;
    number=a.number;
    foot=a.foot;

}

Player::Player(const char fname1[36], const char sname1[36], const char dob1[11],float height1,int weight1, int newpos, int newnum ,int newgoal,string newfoot):
TournamentMember(fname1,sname1,dob1,height1,weight1)
{
position=newpos;
number=newnum;
goals=newgoal;
foot=newfoot;
}

void Player::printp()
{
cout<<"Position is: "<<position<<endl<<"Number is: "<<number<<endl<<"Number of goals scored are: "<<goals<<endl<<"Left or Right: "<<foot<<endl;
cout<<endl;
}

void Player::addgoals()
{
goals++;
cout<<"Number of goals after scoring a goal is now:"<<goals<<endl;
cout<<endl;
}