//Write a program to Print Armstrong numbers in a range
#include<stdio.h>

int main()
{
    int n,c,arm=0,i,r,a,b;
    printf("enter any number");
    scanf("%d",&n);
    for(i=a;i<=b;i++)
    {
        arm=0;
        n=i;
        c=n;
    while(n>0)
    {
        r=n%10;
        arm=arm+(r*r*r);
        n=n/10;
    }
    if(c==arm)
    {printf("%d\n",c);}
    return 0;
}
}