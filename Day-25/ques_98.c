//  Write a program to Find common characters in strings. 
#include <stdio.h>
#include <string.h>

void findCommonCharacters(char str1[], char str2[]) {
    int charCheck[256] = {0}; 

    for (int i = 0; str1[i] != '\0'; i++) {

        charCheck[(unsigned char)str1[i]] = 1;
    }

    printf("Common characters: ");
    int found = 0;

    for (int i = 0; str2[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str2[i];
       
        if (ch == ' ') continue; 

        if (charCheck[ch] == 1) {
            printf("%c ", ch);
            charCheck[ch] = 2; 
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    char string1[] = "portfolio";
    char string2[] = "courses";

    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    findCommonCharacters(string1, string2);

    return 0;
}
