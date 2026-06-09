/* WAP to Print reverse star pattern. 
***** 
**** 
*** 
** 
*       */

#include<stdio.h>

int main()
{
    int i,j,rows=5;
    printf("enter the number of rows");
    scanf("%d",&rows);
    
    for(i=rows;i>=1;++i) //rows
    {
        for(j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
