/*
CH-230-A
a2 p1.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include <stdio.h>

int main() 
{
double d1;
double d2;
scanf("%lf",&d1);
getchar();
scanf("%lf",&d2);
getchar();
printf("sum of doubles=%lf\n",d1+d2);
printf("difference of doubles=%lf\n",d1-d2);
printf("square=%lf\n",d1*d1);
int one,two;
scanf("%d",&one);
getchar();
scanf("%d",&two);
getchar();
printf("sum of integers=%d\n", one+two);
printf("product of integers=%d\n", one*two);
char c1,c2;
scanf("%c",&c1);
getchar();
scanf("%c",&c2);
printf("sum of chars=%d\n",c1+c2);
printf("product of chars=%d\n",c1*c2);
printf("sum of chars=%c\n",c1+c2);
printf("product of chars=%c\n",c1*c2);
return 0;
}


