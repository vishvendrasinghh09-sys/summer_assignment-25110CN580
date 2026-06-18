// Write a program to Find pair with given sum. 
#include <stdio.h>
int main(){
    int i,a[7]={3,7,9,1,7,6,4}
    ,targetsum=8;

    printf("given array =");
    for(i=0;i<7;i++)
    {
        printf("%d\t ",a[i]);
    }
    printf("target sum= %d",targetsum);
    
    for(i=0; i<7; i++)
        {int count = 0;
        for(int j=i+1;j<7;j++)
        {
            if (a[i]+a[j]==targetsum){
                printf("\n pairs found are :[%d,%d]\n",a[i],a[j]);
            }
        }
    }
    return 0;
}
