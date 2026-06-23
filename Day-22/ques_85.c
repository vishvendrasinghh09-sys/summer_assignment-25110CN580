// Write a program to Check palindrome string. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int left, right;
    int is_palindrome = 1; 

    printf("Enter a string: ");
    gets(str);
    left = 0;
    right = strlen(str) - 1;
   
    while (left < right) {
        if (str[left] != str[right]) {
            is_palindrome = 0; 
            break;            
        }
        left++;
        right--;
    }
    if (is_palindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
