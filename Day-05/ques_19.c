//WAP to print factors of a number
#include<stdio.h>
int main ()
{
    int n,i;
    printf("enter a number whose factor to find");
    scanf("%d",&n);

    printf("factors of %d are \n",n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;

}