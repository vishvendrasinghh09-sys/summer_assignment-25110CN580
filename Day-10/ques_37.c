/*
Write a program to Print star pyramid. 
    * 
   *** 
  ***** 
 ******* 
*********
*/

#include<stdio.h>
int main()
{
    int i,j,rows=5,space;
    printf("enter the number rows");
    scanf("%d",&rows);

    for(i=1;i<=rows;++i)
    {
        for (space=1;space<=(rows-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}