/* Write a program to Print repeated character 
pattern. 
A 
BB 
CCC 
DDDD 
EEEEE 

*/
#include<stdio.h>
int main()
{
    int i,j,rows=5,ch;
    printf("enter the number of rows");
    scanf("%d",&rows);
    
    for(i=1;i<=5;++i) //rows
    {
        for(j=1;j<=i;++j){ //columns
            printf("%c ",i+64);
        }
        printf("\n");
    }
    return 0;

}
