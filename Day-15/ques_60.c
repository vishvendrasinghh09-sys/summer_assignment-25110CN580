// WAP to move zeroes to end.
#include<stdio.h>
int main(){
    int a[7],i;
    printf("enter array elements :");
    for(i=0;i<=6;i++)
    {
        scanf("%d",&a[i]);
    }

     int count = 0;
  for (int i = 0; i <7; i++)
  {
    if (a[i] != 0)
    {
      a[count] = a[i];
      count++;
    }
  }
  for (int i = count; i < 7; i++)
   { a[i] = 0;
}
    printf("\n updated array elements :");

    for(i=0;i<=6;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
