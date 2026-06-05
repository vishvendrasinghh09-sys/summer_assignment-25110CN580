//Write a program to Find GCD of two numbers
#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter two integers: ");
    scanf("%d%d", &n1,&n2);
    gcd(n1,n2);
    return 0;
}
gcd(int n1,int n2){
    int i,gcd;
    for(i=1;i<=n1 && i<=n2; i++)
    {
        if (n1%i==0 && n2%i==0)
        gcd=i;
    }
    printf("G.C.D OF %d and %d is %d",n1,n2,gcd);
}

