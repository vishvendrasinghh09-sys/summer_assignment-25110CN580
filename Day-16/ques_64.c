//  Write a program to Remove duplicates from array.
#include <stdio.h>
int main(){
    int i,j,k,n=7,temp,a[7]={3,7,9,1,3,3,4};

    printf("given array =");
    for(i=0;i<n;i++)
    {
        printf("%d\t ",a[i]);
    }
    
    for(i=0; i<n; i++)
        {int count = 0;
        for(int j=i+1;j<n;j++)
        {
            if (a[i]==a[j]){
                for (k=j;k<n-1 ;k++)
                {a[k]=a[k+1];}
            
            n--;
            j--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}





