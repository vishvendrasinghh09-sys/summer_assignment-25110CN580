/*Write a program to Print hollow square 
pattern. 
  ***** 
*      * 
*      * 
*      * 
  ***** 

*/

#include<stdio.h>
int main()
{
    int i,j,rows=5,ch,rows;
    printf("enter the number of rows");
    scanf("%d",&rows);
    
    for(i=1;i<=5;++i) //rows
    {
        for(j=1;j<=rows;++j){ //columns

            if(i==1 || i==rows || j==1 || j==rows )
            {printf("* ");}
        
            else{
                printf("  ");

        }}
        printf("\n");
    }
    return 0;

}