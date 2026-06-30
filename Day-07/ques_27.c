//WAP TO RECURSIVE SUM OF DIGITS 
#include<stdio.h>

int sumofdigits(int n)
{
    if(n==0 ){
    return 0;}
    else
     return (n%10)+sumofdigits(n/10);
}

int main()
{
    int n,i,result,num;
    printf("enter the given number");
    scanf("%d",&n);

    result=sumofdigits(num);

    printf("sum of digits are :%d",result);
    return 0;
}