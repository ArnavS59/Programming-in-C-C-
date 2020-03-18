/*
CH-230-A
a11 p2.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
class Person{

private:
int height;//4 different types
int weight;
float BMI;
std::string eyecolor;
char haircolor;//I defined hair as a char so B corresponds to Brown, O to orange etc.

public:

Person();//default
~Person();//destructor
Person(Person& a);//copy
Person(std::string const&,char const&,int const&,int const&,float const&);//parametric
void print();
///Person(string const &, char const&, int,int,float)//copy

/*void setEyecolor(std::string const& neweyecolor);
void setHaircolor(char const& newhaircolor);
void setHeight(int newheight);
void setWeight(int newWeight);
void setBMI(int,int);


*/

};

