// Write a program to Write function for Fibonacci.

#include<stdio.h>
int fibonacci(int,int);

int main()
{
    int n,a=0,b=1,c,i,fibonacci(n);
    printf("enter the no. of terms");
    scanf("%d",&n);
    printf("%d %d",a,b);
    
    fibonacci(n); 

    return 0;

}
int fibonacci(int a,int b)
{ int i,c,n;
for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d",a);
        a=b;
        b=c;

    }}