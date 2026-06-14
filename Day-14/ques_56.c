// Write a program to Find duplicates in array.
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int array[n], i;
    for(i = 0; i < n; i++)
    {
        printf("Enter array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("The entered array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\nThe duplicate elements are:\n");
    int j, count;
    for(i = 0; i < n; i++)
    {
        count = 0; 
        for(j = 0; j < i; j++)
        {
            if(array[i] == array[j])
            {
                count++;
                break;
            }
        }
        if(count > 0)
        {
            printf("%d\t", array[i]);
        }
    }
    return 0;
}




