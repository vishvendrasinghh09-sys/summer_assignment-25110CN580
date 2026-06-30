//  Write a program to Remove duplicate characters. 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeDuplicates(char* str) {
    bool seen[256] = {false};
    int index = 0;
    
    for (int i = 0; i < strlen(str); i++) {
        unsigned char c = str[i];
        if (!seen[c]) {
            seen[c] = true;
            str[index++] = c;
        }
    }
    str[index] = '\0';
}

int main() {
    char str[] = "programming";
    removeDuplicates(str);
    printf("After duplicates removed: %s\n", str);
    return 0;
}
