// Write a program to Compress a string. 
#include <stdio.h>
#include <string.h>

void compressString(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
    printf("\n");
}

int main() {
    char str[] = "aaabbccccd";
    printf("Compressed: ");
    compressString(str);
    return 0;
}
