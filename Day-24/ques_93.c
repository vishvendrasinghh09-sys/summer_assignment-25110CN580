// Write a program to Check string rotation. 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isRotation(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return false;
    
    // Concatenate s1 with itself
    char* temp = (char*)malloc(2 * strlen(s1) + 1);
    strcpy(temp, s1);
    strcat(temp, s1);
    
    // Check if s2 is a substring of temp
    bool result = strstr(temp, s2) != NULL;
    
    free(temp);
    return result;
}

int main() {
    char s1[] = "ABCD";
    char s2[] = "CDAB";
    if (isRotation(s1, s2)) printf("True: Strings are rotations of each other.\n");
    else printf("False: Not rotations.\n");
    return 0;
}
