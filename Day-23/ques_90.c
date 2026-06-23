// Write a program to Find first repeating character. 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char findFirstRepeating(char *str) {

    bool visited[256] = {false};

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

       
        if (visited[ch]) {
            return ch;
        }
        visited[ch] = true;
    }
    return '\0'; 
}

int main() {
    char str[] = "abcdefba";
    char result = findFirstRepeating(str);

    if (result != '\0') {
        printf("The first chronologically repeating character is: %c\n", result);
    } else {
        printf("No repeating characters found.\n");
    }

    return 0;
}
