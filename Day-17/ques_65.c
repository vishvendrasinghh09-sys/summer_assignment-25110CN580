// Write a program to Merge arrays. 
#include<stdio.h>

int main()
{   int n1=5,n2=5;
    int arr1[n1];
    int arr2[n2];
    int i,merge_arr[n1 + n2];

    printf("enter elements of first array :");
    for(i=0;i<n1;i++)
    {scanf("%d",&arr1[i]);}

    printf("enter elements of second array :");
    for(i=0;i<n2;i++)
    {scanf("%d",&arr2[i]);}

    for(i=0;i<n1;i++)
    {
        merge_arr[i]=arr1[i];
    }
    for(i=0;i<n2;i++)
    {
        merge_arr[n1+ i]=arr2[i];
    }

    printf("merged array: ");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ",merge_arr[i]);
    }
    printf("\n");
return 0;
} 