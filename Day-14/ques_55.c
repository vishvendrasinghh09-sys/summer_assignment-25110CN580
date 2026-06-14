// wap to find second largest number.
#include <stdio.h>
int main(){
    int n;
    printf("enter number of elements:");
    scanf("%d",&n);
    int array[n], i;
    for(i=0; i<n; i++){
        printf("enter array[%d]=",i);
        scanf("%d",&array[i]);
    }
    printf("the entered array is\n");
    for(i=0; i<n; i++){
        printf("%d\t",array[i]);
    }
    int largest = array[0];
    int secondLargest = array[0]; 
    for(i = 1; i < n; i++)
    {
        if(array[i] > largest)
        {
            secondLargest = largest;
            largest = array[i];
        }
        else if(array[i] > secondLargest && array[i] != largest)
        {
            secondLargest = array[i];
        }
    }
    printf("\nSecond largest element = %d", secondLargest);
    return 0;
}