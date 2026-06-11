/* Write a program to Write function to find 
factorial. 
*/
#include<stdio.h>
int factorial(int);
int main()
{
    int n,i,factorial;
    printf("enter the given number");
    scanf("%d",&n);
    
    factorial=fact(n);

    printf("factorial of given number :%d",fact);
    return 0;
}
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    
    }
    return f;
}