// WAP TO RECURSIVE REVERSE NUMBER
#include<stdio.h>

int reverse(int n,int rev)
{
    if(n==0 )
    return rev;
    else
    rev=(rev*10)+(n%10);
     return reverse(n/10,rev);
}

int main()
{
    int n,i,result,num;
    printf("enter the given number");
    if (scanf("%d", &num)!=1)
    {
        printf("Invalid input");
        return 1;
    }
    scanf("%d",&n);

    result=reverse (num,0);
    printf("%d",result);
    return 0;
}