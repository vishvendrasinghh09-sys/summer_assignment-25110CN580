/*  Write a program to Count even and odd 
elements. */
#include <stdio.h>
int main(){
    int n,even=0,odd=0;
    printf("enter number:");
    scanf("%d",&n);
    int array[n];
    int i;
    for(i=0; i<n; i++){
        printf("Enter array[%d]:",i);
        scanf("%d",&array[i]);
    }
    
    for(i=0; i<n; i++){
        if (array[i]%2==0)
        even++;
        else
        odd++;
    }
    {printf("no. of even numbers %d\t",even);}
    {printf("no. of odd numbers %d\t",odd);}
    
    return 0;
}

