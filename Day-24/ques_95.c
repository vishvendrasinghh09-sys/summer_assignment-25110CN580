//  Write a program to Find longest word. 

#include <stdio.h>
#include <string.h>

void findLongestWord(char* str) {
    int len = 0, maxLen = 0, start = 0, maxStart = 0;
    int n = strlen(str);
    
    for (int i = 0; i <= n; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }
    }
    printf("Longest word: %.*s (Length: %d)\n", maxLen, str + maxStart, maxLen);
}

int main() {
    char str[] = "Programming is awesome and challenging";
    findLongestWord(str);
    return 0;
}
