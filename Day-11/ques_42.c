/*Write a program to Write function to find 
maximum. 
*/
#include<stdio.h>
int max(int,int); //function declaration
int max(int x,int y)
{
    if (x>y)
        return (x);
    else 
        return (y);

}
int main()
{
    int a,b,result;
    printf("enter the given 2 numbers");
    scanf("%d%d",&a,&b);
    
    result =max(a,b);
    printf("maximum of numbers is :%d",result);
    return 0;
}