//  Write a program to Character frequency.
#include<stdio.h>
int main()
{ 
    int count=0,c;
    char str[100];
    printf("enter the string :");
    gets(str);

    for(c='a';c<='z';c++)
    {
        count=0;
    for(int i =0;str[i]!='\0';i++)
    {
        if (c==str[i])
        {
            count++;
        }
    }
    if (count>0)
    printf("%c is found in %d times \n",c,count);

} return 0;
}