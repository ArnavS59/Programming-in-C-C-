/*
CH-230-A
a2 p9.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char c;
    scanf("%c",&c);

  if( (c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z') ) /* We are taking 3 cases, first one where we include all
                                                       alphabets upper and lower case*/
    {
        printf("%c is a letter\n", c);
    }
    else if(c >= '0' && c <= '9') // Otherwise, we check for a number
    {
        printf("%c is a digit\n", c);
    }
    else                               // if that doesn't work it has to be a character
    {
        printf("%c is some other symbol\n", c);
    }

    return 0;
}