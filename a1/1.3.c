/*
CH-230-A
a1 p3.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()   /* Missing # in include  */
{

float result; /* The result of the division */
int a = 5;
float b = 13.5;   /* Decimals therefore we need to use float  */
result = (float)a / b;  /* Float for decimals   */
printf("The result is %f\n", result); /* %d changes to %f for float  */
return 0;
}
