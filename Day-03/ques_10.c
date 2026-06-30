//Write a program to Print prime numbers in a range

#include<stdio.h>
int main()
{
    int start,end,count=0,x,i,temp;
    printf("enter the start number and end number :");
    scanf("%d %d",&start, &end);

    for(x=start;x<=end;x++)
    {
        for(i=2;i<x;i++)
        {
            break;
        }

    }
    if(i==x)
    {
        printf("%d",x);
        count++;
    }
    printf("Total numbers are: %d",count);
    return 0;
}