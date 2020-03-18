/*
CH-230-A
a13 p1.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
string filename;// for scanning the name of input file from keyboard
string s;// for storing data
ifstream input;
cout<<"Enter filename without .txt"<<endl; 
cin>>filename;
input.open(filename+".txt");// just need to type input and .txt gets added automatically 
ofstream output;
    if (output.fail())// if file is not opened then print message 
    {
    cout<<"Error opening file"<<endl; 
    }

output.open(filename+"_copy.txt",ios::binary);// according to question criteria format

   //while loop to input output for entire loop
        while (!input.eof()) 
        {
            input>>s;// reading everything 
            output<<s<<'\n';//prinitng into output file            
        }

output.close();//closing all files opened
input.close();
return 0;

}

