/*
CH-230-A
a2 p8.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num;
  scanf("%d",&num);

    if ((num % 2==0) && (num %7==0)) // if the remainder is 0 for both 2 and 7 then print whats in next line
{
printf("The number is divisible by 2 and 7\n");
}
    else    // otherwise it is not divisble
{
printf("The number is NOT divisible by 2 and 7\n");
}

    return 0;
}
