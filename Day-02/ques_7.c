//WAP to find product of digits
#include<stdio.h>
int main()
{
    int n,d,temp,product=1;
    printf("enter the given number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        product=product*d;
        n=n/10;
    }
    printf("product of digits of %d is :%d",temp,product);
    return 0;
}
