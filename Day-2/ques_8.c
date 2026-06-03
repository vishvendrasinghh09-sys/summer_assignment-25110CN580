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
    if (rev==temp)
    printf("palindrome number");
   else
    printf("not a palindrome number");
    return 0;
}