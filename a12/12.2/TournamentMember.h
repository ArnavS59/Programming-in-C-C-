/*
CH-230-A
a12 p2.[c or cpp or h]
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
float height;//2 additional properties 
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



