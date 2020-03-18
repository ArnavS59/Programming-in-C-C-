/*
CH-230-A
a11 p1.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Box.h"
 
using namespace std;
 
int main(){
int n,i;
Box *listb;
cout<<"Enter number of boxes"<<endl;
cin>>n;
cin.get();

listb= new Box[2*n];
double height;
double width;
double depth;

for (i=0; i<n; i++) //reading all the elements
{
 cout<<"Box#"<<i+1<<endl;

 cout<<"Height:";
 cin>>height;
 cin.get();
 listb[i].setHeight(height);

 cout<<"Width:";
 cin>>width;
 cin.get();
 listb[i].setWidth(width);

 cout<<"Depth:";
 cin>>depth;
 cin.get();
 listb[i].setDepth(depth);

 cout<<endl;

}
for (int i = n ; i <n*2; i++ )
{

	listb[i]= Box(listb[i-n]);//copy constructor 
} 
for (int i = 0 ; i <n*2; i++ ){

	listb[i].print(); //printing again
} 


delete []listb;//freeing memoery allocated

return 0;
}
