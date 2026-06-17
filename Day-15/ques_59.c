// wap to rotate array right
#include<stdio.h>
int main(){
    int a[5],i;
    printf("enter array elements : \n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp=a[4];
    for (i=3;i>=0;i--)
    {
        a[i+1]=a[i];   
    }
    a[0]=temp;
    printf("\n right rotated array elements :");
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}