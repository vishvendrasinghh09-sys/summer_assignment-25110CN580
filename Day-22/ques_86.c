//  Write a program to Count words in a sentence. 

#include<stdio.h>

int main()
{ 
    int count=1;
    char strA[100];
    printf("enter the string");
    gets(strA);

    for(int i =0;strA[i]!='\0';i++)
    {
        if (strA[i]==' ')
        {
            count++;
        }
    }
    printf("number of words in sentence is %d",count);

}