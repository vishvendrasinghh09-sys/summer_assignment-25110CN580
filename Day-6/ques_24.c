// WAP to find X^n without pow()
int main()
{
    int n,p,i,c=1,temp;
    printf("enter the number :");
    scanf("%d",&n);

    printf("enter the power:");
    scanf("%d",&p);

    for(i=1;i<=p;i++){
        temp=n;
        c=c*temp;
    }
    printf("result : %d",c);
}