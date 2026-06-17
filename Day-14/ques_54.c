// Write a program to Frequency of an element. 
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
    int element, count=0;
    printf("\nenter element to be searched for:");
    scanf("%d",&element);
    for(i=0; i<n; i++){
        if(array[i]==element){
            count+=1;
        }
    }
    printf("the frequency of %d is %d",element,count);
    return 0;
}