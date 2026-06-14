// Write a program to Linear search. 
#include<stdio.h>
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
    int element, key=0;
    printf("\nenter element to be searched for:");
    scanf("%d",&element);
    for(i=0; i<n; i++){
        if(array[i]== element){
            element= array[i];
            key= i;
        }
    }
    printf("\nthe element %d is found at %d index",element,key);
    return 0;

}