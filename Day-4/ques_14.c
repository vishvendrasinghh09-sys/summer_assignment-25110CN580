// WAP to Find nth Fibonacci term. 
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("\n which term to print \n");
    scanf("%d",&n);
    if(n<0)
    {printf("invalid input");}

    elseif(n==1)
    {
        printf("%d", a);}

    elseif(n==2)
    {printf("%d",b);}

    else{
        for(i=3,i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
    }    
    return 0;

}
