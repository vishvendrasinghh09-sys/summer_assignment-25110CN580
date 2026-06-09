/*
Write a program to Print number pyramid. 
    1 
   121 
  12321 
 1234321 
123454321

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
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;

}
