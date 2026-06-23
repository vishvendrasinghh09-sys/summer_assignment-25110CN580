// Write a program to Convert lowercase to uppercase. 
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string in lowercase: ");
    gets(str);
     {
        while (str[i] != '\0') {
            str[i] = toupper((unsigned char)str[i]);
            i++;
        }
        printf("String in uppercase: %s", str);
    }

    return 0;
}