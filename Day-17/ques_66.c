//wap for union of two arrays.

#include<stdio.h>

int main()
{   int n1=5,n2=5;
    int arr1[n1], arr2[n2];
    int unionsize=0;
    int i,j,union_arr[n1 + n2];

    printf("enter elements of first array :");
    for(i=0;i<n1;i++)
    {scanf("%d",&arr1[i]);}

    printf("enter elements of second array :");
    for(i=0;i<n2;i++)
    {scanf("%d",&arr2[i]);}

    for(i=0;i<n1;i++)
    {
       union_arr[unionsize]=arr1[i];
       unionsize++;
    }
    for(i=0;i<n2;i++)
    {   int duplicate=0;
        for(j=0;j<unionsize;j++)
        {
            if (arr2[i]==union_arr[j])
            {
                duplicate=1;
                break;
            }
        }
        if(!duplicate){
            union_arr[unionsize]=arr2[i];
            unionsize++;
        }
    }
    
    printf("union array: ");
    for(i=0;i<unionsize;i++)
    {
        printf("%d ",union_arr[i]);
    }
    printf("\n");
return 0;
} 