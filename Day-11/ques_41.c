/* Write a program to Write function to find sum 
of two numbers. */

#include<stdio.h>
int sum(int,int); //function declaration
int sum(int x,int y)
{
    int z;
    z=x+y ;
    return z;
}
int main()
{
    int a,b,result;
    printf("enter the given 2 numbers");
    scanf("%d%d",&a,&b);
    
    result =sum(a,b);
    printf("sum of numbers is :%d",result);
    return 0;
}