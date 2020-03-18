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
void setPosition(int pos1){position=pos1;}
void setNUM(int num1){number=num1;}
void setFoot(std::string foot1){foot=foot1;}
int getPosition(){return position;} 
int getGoals(){return goals;}
int getNUM(){return number;}
std::string getFoot(){return foot;}
void printp();
};

class Referee: public TournamentMember{
  private:
    int yellowCardCount;
    Player *yellowCardList[40];
    int redCardCount;
    Player *redCardList[40];
  public:
    bool addToYellowCardList(Player *p);
    bool addToRedCardList(Player *p);
    Referee(const char[36],const char[36],const char[11],int,int,int,int)
    void setYcard(int yellowCardCount1){yellowCardCount=yellowCardCount1;}
    void setRcard(int redcard1){redcard1=redCardCount;}
    
    int getRcard(){return redCardCount;}
    int getYcard(){return yellowCardCount;}

};