//Write a program to Find LCM of two numbers
#include<stdio.h>

int main(){
    int n1,n2,lcm,fact=1;
    printf("enter two integers: ");
    scanf("%d %d", &n1,&n2);
     lcm =(n1>n2) ? n1 : n2; 

    while (fact)
    {
        if (lcm%n1==0 && lcm%n2==0)
        {
            printf("L.C.M of %d and %d is %d\n",n1,n2,lcm);
            fact=0;
        }
        lcm++;
    }
}