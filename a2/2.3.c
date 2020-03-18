/*
CH-230-A
a2 p3.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int weeks, days, hours;
printf("Enter number of weeks:");
scanf("%d", &weeks);
printf("Enter number of days:");
scanf("%d", &days);
printf("Enter number of hours:");
scanf("%d", &hours);

hours= hours+weeks*168+days*24;

printf("Number of hours: %d" ,hours );

   return 0;
}