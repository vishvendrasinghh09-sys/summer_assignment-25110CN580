// WAP to Find nth Fibonacci term. 
#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("enter the limit:");
    scanf("%d",&n);

    printf("the %d number in the fibonacci series is :",n);

    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
       
    }
    printf("%d",c);
    return 0;
}
