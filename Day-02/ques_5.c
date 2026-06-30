#include<stdio.h>
int main()
{
    int n,d,temp,sum=0;
    printf("enter the given number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("sum of digits of %d is :%d",temp,sum);
    return 0;
}
