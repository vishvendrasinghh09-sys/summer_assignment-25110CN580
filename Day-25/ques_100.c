//  Write a program to Sort words by length. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 50

int compareWords(const void *a, const void *b) {
    
    const char *str1 = (const char *)a;
    const char *str2 = (const char *)b;
    
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
   
    if (len1 < len2) return -1;
    if (len1 > len2) return 1;
    
    return strcmp(str1, str2);
}

int main() {
    int n;
    char words[MAX_WORDS][MAX_LENGTH];

    printf("Enter the number of words: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_WORDS) {
        printf("Invalid number of words.\n");
        return 1;
    }

    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    qsort(words, n, sizeof(words[0]), compareWords);

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
