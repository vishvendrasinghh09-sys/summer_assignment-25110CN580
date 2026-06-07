// WAP TO PRINT half pyramid triangle.
/*
*
*   *
*   *   *
*   *   *   *
*   *   *   *   *
*/

#include<stdio.h>
int main()
{
    int i,j,rows=5;
    printf("enter the number rows");
    scanf("%d",&rows);
    
    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}