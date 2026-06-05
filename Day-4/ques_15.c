// WAP to Check Armstrong number e.g,153
#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,arm=0,r;
    printf("enter any number");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=arm+(r*r*r);
        n=n/10;
    }
    if(c==arm)
    printf("armstrong number");
    else
    printf("not an armstrong number");
    return 0;
}