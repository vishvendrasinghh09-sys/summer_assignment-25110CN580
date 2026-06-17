// WAP to rotate array left.
#include<stdio.h>
int main(){
    int a[5],i;
    printf("enter array elements :");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp=a[0];
    for (i=0;i<=4;i++)
    {
        a[i]=a[i+1];
        a[4]=temp;
    }
    printf("\n left rotated array elements :");
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}