// Write a program to Write function for perfect no.

#include<stdio.h>
int perfect_number(int);

int main(){
    int n,sum=0,perfect_number(n);
    printf("enter a number");
    scanf("%d",&n);
     
    perfect_number(n);
     return 0;
}

 int perfect_number(int n)
 {
    int n,sum=0;
for(int i=1;i<=n/2;i++)
     {
        if(n%i==0)
        {sum=sum+i; }
     }
     if (sum==n && n>0)
     {
        printf("%d is a perfect number ",n);
     }
     else{
        printf("%d is not aperfect number",n);
     }}