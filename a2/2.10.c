/*
CH-230-A
a2 p10.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,hours;
int i=2;
 scanf("%d", &n);
    printf(" 1 day= 24 hours\n"); /* we make an exception here and start from i=2 because if we start from i=1
                                   we will get 1 days instead of 1 day as per the question
                                   */
    while ( i<=n) {
    hours=24*i;
    printf( " %d days= %d hours\n",i,hours);
        i++;
    }

    return 0;
}
