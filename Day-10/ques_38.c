/*
Write a program to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   *** 
    * 
*/
#include<stdio.h>
int main()
{
    int i,j,rows=5,space;
    printf("enter the number rows");
    scanf("%d",&rows);

    for(i=rows;i>=1;i--)
    {
        for (space=1;space<=(rows-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);++j){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;

}