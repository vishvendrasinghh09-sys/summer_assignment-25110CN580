//  Write a program to Remove spaces from string.
#include <stdio.h>

void removeSpaces(char *str) {
    int count = 0; 
    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

int main() {
    char str[] = "C  pro gram  m ing   is   f u n";
    
    printf("Original string: '%s'\n", str);
    
    removeSpaces(str);
    
    printf("Modified string: '%s'\n", str);
    
    return 0;
}