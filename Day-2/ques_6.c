#include<stdio.h>
int main()
{
    int n,d,temp,rev=0;
    printf("enter the given number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("reverse of %d is :%d",temp,rev);
    return 0;
}
