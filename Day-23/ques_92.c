//  Write a program to Find maximum occurring character.
#include <stdio.h>
#include <string.h>

char getMaxOccurringChar(char str[]) {
    int count[256] = {0}; // Array to store frequency of all 256 ASCII characters
    int max = -1;         
    char result;          

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (max < count[(unsigned char)str[i]]) {
            max = count[(unsigned char)str[i]];
            result = str[i];
        }
    }

    return result;
}

int main() {
    char str[] = "sample string";
    
    char maxChar = getMaxOccurringChar(str);
    
    printf("The maximum occurring character is: '%c'\n", maxChar);
    
    return 0;
}
