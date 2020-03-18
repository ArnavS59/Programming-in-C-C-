/*
CH-230-A
a2 p4.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b,h, squarearea, rectanglearea,trianglearea, trapezoidarea;
   scanf(" %f",&a);
   scanf(" %f",&b);
   scanf(" %f",&h);
   squarearea= a*a;
   printf("square area=%f\n", squarearea);
   rectanglearea= a*b;
    printf("rectangle area=%f\n", rectanglearea);
   trianglearea=0.5*a*h; // formulas for area of different shapes
    printf("triangle area=%f\n", trianglearea);
    trapezoidarea=(0.5*(a+b))*h;
    printf("trapezoid area=%f\n", trapezoidarea);
    return 0;
}



