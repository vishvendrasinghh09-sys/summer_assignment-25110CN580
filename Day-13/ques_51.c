/* Write a program to Find largest and smallest 
element. */

#include <stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int array[n];
    int i;
    for(i=0; i<n; i++){
        printf("Enter array[%d]:",i);
        scanf("%d",&array[i]);
    }
    printf("the array is\n");
    printf("{\t");
    for(i=0; i<n; i++){
        printf("%d\t",array[i]);
    }
    printf("}\n");
    int max= array[0], key=0;
    for(i=0; i<n; i++){
        if(array[i]>max){
            max= array[i];
            key= i;
        }
    }
    printf("the maximum element is %d present at %d index\n",max,key);
    int min= array[0], loc=0;
    for(i=0; i<n; i++){
        if(array[i]<min){
            min= array[i];
            loc= i;
        }
    }
    printf("the minimum element is %d present at %d index\n",min,loc);
    return 0;
}