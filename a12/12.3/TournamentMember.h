/*
CH-230-A
a12 p3.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
class TournamentMember
{
private:
char firstname[36];
static std::string location;
char secondname[36];
char dob[11];
float height;
int weight;


public:
    TournamentMember();
    ~TournamentMember();
    TournamentMember( const char[36] ,const char[36] , const char[11] ,float,int);
    TournamentMember(const TournamentMember&);
    void print();

    void setHeight(float height1){height=height1;}
    float getHeight() {return height;}

    
    int getWeight() {return weight;}

   
    void setFname(char[]);
    char getFname();


    void setSname(char[]);
    char getSname();

   void setDOB(char[]);
    char getDOB();

  static void setlocat(std::string loc1){location=loc1;}
  std::string getlocat(){return location;}


};
inline void TournamentMember::setFname(char fname1[36]){
 for (int i = 0; i <=36; i++)
  {
    fname1[i]=firstname[i];
  }
}

inline void TournamentMember::setSname(char sname1[36]){
for (int i = 0; i <=36; i++)
  {
    sname1[i]=secondname[i];
  }

}

inline void TournamentMember::setDOB(char dob1[11]){
for (int i = 0; i <=11; i++)
  {
    dob1[i]=dob[i];
  }
}



inline char TournamentMember::getFname()
{
  return firstname[35];
}

inline char TournamentMember::getSname()
{
  return secondname[35];
}

inline char TournamentMember::getDOB()
{
  return dob[10];
}



class Player : public TournamentMember {
private:
int position;
int goals;
std::string foot;
int number;


public:
Player();
~Player();
Player(const Player&);
Player(const char[36] ,const char[36] , const char[11] ,float,int, int,int,int, std::string);
void setPosition(int pos1){position=pos1;}//everything is inline except paramteric constructor would have been too long
void setNUM(int num1){number=num1;}
void setFoot(std::string foot1){foot=foot1;}
int getPosition(){return position;} 
int getGoals(){return goals;}
int getNUM(){return number;}
std::string getFoot(){return foot;}
void printp();
void addgoals();
};

