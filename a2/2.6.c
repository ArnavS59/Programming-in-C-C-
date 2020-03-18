/*
CH-230-A
a2 p6.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   double x,y;
    scanf("%lf", &x);
    scanf("%lf", &y);
   double *ptr_one,*ptr_two,*ptr_three; //declaring variables
   ptr_one=&x;
   ptr_two=&x;
   ptr_three=&y;
   printf("Address of x from ptr_one is %p\n",ptr_one);
printf("Address of x from ptr_two is %p\n",ptr_two);
printf("Address of y from ptr_three is %p\n",ptr_three);

    return 0;
}