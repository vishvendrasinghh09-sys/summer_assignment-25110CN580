// WAP TO PRINT character TRIANGLE
/*
A
A   B
A   B   C
A   B   C   D
A   B   C   D   E

*/

#include<stdio.h>
int main()
{
    int i,j,rows=5;
    printf("enter the number rows");
    scanf("%d",&rows);
    
    for(i=1;i<=5;++i)
    {
        for(j=1;j<=i;++j){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;

}