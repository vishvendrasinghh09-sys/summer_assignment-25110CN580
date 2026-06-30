//wap to recursive factorial.

#include<stdio.h>

int factorial(int n)
{
    if(n==0  || n==1)
    return 1;
    else
     return n*factorial(n-1);
}

int main()
{
    int n,i,result,num;
    printf("enter the given number");
    scanf("%d",&n);
    result=factorial(num);
    printf("%d",result);
    return 0;
}
