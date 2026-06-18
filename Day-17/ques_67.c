 
// Write a program to Intersection of arrays.  
#include<stdio.h>
int main()
{   int i,j;
    int arr1[6] = {4, 9, 1, 2, 4, 5};
    int arr2[5] = {9, 4, 8, 4, 2};

    printf("Array 1: ");
    for(int i=0; i< 6; i++) 
    printf("%d ", arr1[i]);

    printf("\nArray 2: ");
    for(int i=0; i< 5; i++) 
    printf("%d ", arr2[i]);

    printf("intersection of two arrays :\t");
    for(i=0;i<6 ;i++)
    {
        for (j=0;j<5;j++)
        {
            if (arr1[i]==arr2[j])
            {
                printf("%d \t ",arr1[i]);
                break;
            }
        }
    }
    return 0;
}