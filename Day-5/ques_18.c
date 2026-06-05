//Write a program to Check strong number. 
#include<stdio.h>
int main(){
    int n,sum=0,rem,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem= n%10;
        int fact=1;
     for(int i=1;i<=rem;i++)
     {
        fact*=1;
     }
     sum=sum+fact;
    n=n/10;}
     if (sum==n && n>0)
     {
        printf("%d is a strong number ",n);
     }
     else{
        printf("%d is not a strong number",n);
     }
     return 0;
}