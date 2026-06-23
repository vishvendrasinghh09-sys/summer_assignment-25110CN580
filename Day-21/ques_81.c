// Write a program to Find string length without strlen(). 

#include<stdio.h>
int main()
{
    char name[50]="vishvendra singh";
    int i=0;
    while(name[i] != '\0')
    {i++;}
    printf("string length is : %d",i);

    return 0;
}