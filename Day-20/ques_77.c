// Write a program to Multiply matrices. 

#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,r1,r2,c1,c2,k;
    printf("enter dimensions of matrixes A:");
    scanf("%d%d",&r1,&c1);
    printf("enter dimensions of matrixes B:");
    scanf("%d%d",&r2,&c2);
    printf("enter matrix A elements :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter matrix B elements :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {                                   //code for multiplication of matrix
        for(j=0;j<c2;j++)
        { 
            c[i][j]=0;
            for(k=0;k<c1;k++){
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }}
    }
    printf("resultant matrix is given by :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        { printf("%d\t",c[i][j]);}
        printf("\n");
}}