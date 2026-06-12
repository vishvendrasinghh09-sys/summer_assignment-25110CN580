/* Write a program to Write function for 
palindrome. */
#include<stdio.h>
int isPalindrome(int num) {
    int reversed = 0;
    int original = num;
    int remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num /= 10;
    }

    if (original == reversed) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int n,d,temp,rev=0,number;
    printf("enter the given number");
    scanf("%d",&n);
    
    if (ispalindrome(number))
    printf("palindrome number");
   else
    printf("not a palindrome number");
    return 0;
}




