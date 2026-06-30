//WAP to print fibbonacii series
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("enter the no. of terms");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d",a);
        a=b;
        b=c;

    }
    return 0;

}