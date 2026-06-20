// Write a program to Add matrices. 

#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,m,n;
    printf("enter dimensions of matrixes :");
    scanf("%d%d",&m,&n);
    printf("enter matrix A elements :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d\t",&a[i][j]);
        }
    }
    printf("enter matrix B elements :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d\t",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the resultant matrix is \n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");}
        return 0;

}