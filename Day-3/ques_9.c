//WAP TO CHECK WHETHER A NUMBER IS PRIME.
#include<stdio.h>
int main()
{
    int n,i,flag=0,m;
    printf("enter the given number");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m; i++)
    {
    if(n%i==0){
        printf("not prime number");
        flag=1;
        break;

    }
    }
    if(flag==0)
    printf("prime number");
    return 0;
}