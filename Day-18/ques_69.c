// Write a program to Bubble sort.
#include<stdio.h>
int main()
{ int a[50],n,i,j,temp;
    printf("enter the number of elements :");
    scanf("%d",&n);
    printf("enter the list of elements :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);}
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the sorted array :");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}