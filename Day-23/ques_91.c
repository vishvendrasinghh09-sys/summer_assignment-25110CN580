// Write a program to Check anagram strings. 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char str1[], char str2[]) {
    int count[26] = {0};

    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;  
        count[str2[i] - 'a']--;  
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    } return true;
}

int main() {
    char s1[] = "silent";
    char s2[] = "listen";

    if (isAnagram(s1, s2)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}