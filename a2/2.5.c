/*
CH-230-A
a2 p5.[c or cpp or h]
Arnav Singh
arsingh@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d",&a);
    getchar();
    printf("%d\n",a);
    int *ptr;
    ptr= &a;
    printf("Address of a is %p\n", ptr);
    *ptr=*ptr+5; // increasing the value of pointer by 5
    printf("Value is now %d\n", *ptr);
    printf("Address is now %p\n", ptr); // p format specifier prints pointer address

    return 0;
}
