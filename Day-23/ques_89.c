// Write a program to Find first non-repeating character. 
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256 // Total number of possible ASCII characters
char findFirstNonRepeating(char *str) {
    int frequency[MAX_CHAR] = {0};
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            return str[i]; 
    }
    return '\0'; 
}}

int main() 
    {
        char str[100];
    
    printf("Enter a string: ");
    gets(str);

    char result = findFirstNonRepeating(str);

    if (result != '\0') {
        printf("The first non-repeating character is: '%c'\n", result);
    } else {
        printf("All characters are repeating or the string is empty.\n");
    }

    return 0;

}
