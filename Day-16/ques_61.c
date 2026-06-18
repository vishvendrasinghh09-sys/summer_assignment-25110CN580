// Write a program to Find missing number in array.

#include <stdio.h>
int main(){
    int n,sum=0;
    printf("enter number of elements:");
    scanf("%d",&n);
    int a[n], i,total;
    for(i=0; i<n; i++){
        printf("enter array[%d]=",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    n++;
    total=(n*(n+1))/2;
    printf("the missing number is %d\n",total-sum);
    return 0;
}