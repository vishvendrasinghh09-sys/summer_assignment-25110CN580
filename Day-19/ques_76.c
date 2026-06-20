//  Write a program to Find diagonal sum. 

#include<stdio.h>
int main()
{
    int i,j,m,n,s1=0,s2=0;
    printf("enter dimensions of matrixes :\n");
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n];
    if(m==n){
    printf("enter matrix A elements :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        s1=s1+a[i][i];
        s2=s2+a[i][m-1-i];
    }
    printf("sum of main diagonals =%d \n ",s1);
    printf("sum of off diagonals =%d",s2);}
    else
     {printf("sum of diagonals cannot be generated");}
    return 0;


}