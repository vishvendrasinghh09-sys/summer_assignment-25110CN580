//Write a program to Find sum and average of array.
#include <stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int array[n];
    int i;
    float sum, average;
    for(i=0; i<n; i++){
        printf("Enter array[%d]:",i);
        scanf("%d",&array[i]);
    }
    
    for(i=0; i<n; i++){
        sum=sum+array[i];
        
    }
        average=sum/n;
            printf("sum of array is %.2f",sum);
            printf("\n average of array is %.2f",average);
    

    return 0;
}