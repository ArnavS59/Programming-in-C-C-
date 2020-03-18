
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
    cout<<"copy constructor is being called"<<endl;
    position=a.position;
    goals=a.goals;
    number=a.number;
    foot=a.foot;

}

Player::Player(const char fname1[36], const char sname1[36], const char dob1[11],float height1,int weight1, int newpos, int newnum ,int newgoal,string newfoot):TournamentMember(fname1,sname1,dob1,height1,weight1)
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

Referee::Referee(const char[36]fname1,const char[36] sname1,const char dob[11],int,int,int newyellcard,int newredcard):
TournamentMember(const char fname1[36], const char sname1[36], const char dob1[11],float height1,int weight1)
{
  yellowCardCount=newyellcard;
  redCardCount=newredcard;
}

bool Referee::addToYellowCardList(Player *p){
  for (int i = 0; i <=yellowCardCount; i++)
  {
    if([yellowCardList[i]==p)
    {
        
        
       return addToRedCardList(p);
        
        
    }  
  
    yellowCardList[yellowCardCount]=p;
    yellowCardCount++;
    return true;

  
}
}


bool Referee::addToRedCardList(Player *p){
  for (int i = 0; i <=redCardCount; i++){
    if (redCardList[i]==p)
    {
      return false;
    
    }
}
redCardList[redCardCount]=p;
return true;

}