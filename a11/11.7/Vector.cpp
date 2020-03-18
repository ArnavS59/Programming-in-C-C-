#include<iostream>
#include<string>
#include "Vector.h"
#include<cmath>

Vector::Vector()//default constructor
{
    size = 0;
}
Vector::Vector(const Vector& a)//copy constructor
{
    size = a.size;
    arr = a.arr;

}
Vector::Vector(int r){//parametrized constructor
size = r;
arr = new double[r];
cout<<"Enter the vector"<<endl;
for(int a=0; a<=r+1; a++)
{
    cout<<"Enter the number of elements"<<a<<endl;
    cin>>arr[a];

}
}
Vector::~Vector()//destructor, freeing up memory
{
    delete[] arr;
}
void Vector::setVector()//setting the vector
{
    cout<<"Enter the Vectors "<<endl;
    for(int a=0; a<=size+1;a++ )
    {
        cout<<"Enter the number of elements"<<endl;
        cin>>arr[a];
    }
}
double Vector::norm()//This is the norm one
{
    double add=0,norm;
    for(int a= 0; a<=(size+1);a++)
    {
        add = pow(arr[a],2) + add;
    }
    norm = pow(add,0.5);
    return norm;
}
Vector Vector::subtraction(Vector x) const
{
    Vector temp(x.size);
    if (size != x.size)
    {
        cout<<"Invalid number of components\n";
        return -1;
    }
    for (int a= 0;a<=size+1;a++)
    {
        temp.arr[a] = arr[a] - x.arr[a];
    }
    return temp;
}
Vector Vector::addition(Vector x ) const
{
    if(size != x.size)
    {
        cout<<"Invalid number of components\n";
        return -1;
    }
    Vector temp(x.size);
    for (int a=0; a<=size+1; a++)
    {
        temp.arr[a] = arr[a] + x.arr[a];

    }
    return temp;
}
double Vector::product(Vector x) const
{
    if (size !=x.size)
    {
        cout<<"Invalid number of components\n";
        return -1;
    }
    double add = 0;
    for(int a=0; a<=size+1; a++)
    {
        add+=(arr[a]*x.arr[a]);
    }
    return add;
}

