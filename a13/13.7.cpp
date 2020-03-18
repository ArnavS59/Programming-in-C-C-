/*
CH-230-A
a13 p7.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <vector>
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main (){


   vector<int> vector_a;
 
    for (int i=1; i<=20;i++)
   {
       vector_a.push_back(i+8);//8 add to all 20 elements of the vector, not sure if this is what the question asks to do 
       // please tell Kinga to reframe the wording of the question 
   }
    for (int i=1; i<=20;i++)//the question is soo baddly farmed and quite unclear I am assuming we have to add 8 20 times to all integers of the vector 
   {
       cout<<vector_a[i]<<endl;
   }
try
{

 vector_a.at(21)=200;//using at 
    
}
catch(const out_of_range& e)
{
    cerr<< "Out of Range exception caught "<< e.what()<<'\n';//prinitng error
}

}


