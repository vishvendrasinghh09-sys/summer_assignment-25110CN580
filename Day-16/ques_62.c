/*  Write a program to Find maximum frequency 
element. 
*/
#include <stdio.h>
int main(){
    int i,a[7]={3,7,9,7,7,6,3}
    ,max_element=a[0],max_count=0;

    for(i=0; i<7; i++)
        {int count = 0;
        for(int j=0;j<7;j++)
        {
            if (a[j]==a[i]){
                count++;
            }
        }
        if(count >max_count){
            max_count =count;
            max_element = a[i];
        }
    }
    
    printf("the most frequent number is %d\n",max_element);
    return 0;
}