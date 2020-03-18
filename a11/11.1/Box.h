/*
CH-230-A
a11 p1.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
class Box{//class declerations

private:
double height;
double width;
double depth;

public:
Box();
~Box();
Box(Box& a);
Box(double,double,double);

void print();

void setHeight(double height1);
void setWidth(double width1);
void setDepth(double depth1);

double getHeight();
double getWidth();
double getDepth();

};