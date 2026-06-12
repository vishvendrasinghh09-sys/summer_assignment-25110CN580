// Write a program to Write function for armstrong.

#include<stdio.h>
int armstrong (int);

int main()
{
    int n,armstrong,r,sum=0;
    printf("enter any number");
    scanf("%d",&n);

    return 0;
}
int armstrong(int n)
{    int x,x=n,sum=0,r;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==x)
    printf("armstrong number");
    else
    printf("not an armstrong number");
}