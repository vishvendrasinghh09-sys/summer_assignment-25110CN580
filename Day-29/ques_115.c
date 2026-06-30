// Write a program to Create menu-driven string operations system. 

#include <stdio.h>

int main() {
    char str[100], str2[100];
    int choice, i, len = 0;

    printf("Enter a string: ");
    gets(str); 

    while (1) {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n2. Reverse\n3. Copy\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        switch (choice) {
            case 1:
                for(len=0; str[len]!='\0'; len++);
                printf("Length: %d\n", len);
                break;
            case 2:
                for(len=0; str[len]!='\0'; len++);
                printf("Reverse: ");
                for(i=len-1; i>=0; i--) printf("%c", str[i]);
                printf("\n");
                break;
            case 3:
                for(i=0; str[i]!='\0'; i++) str2[i] = str[i];
                str2[i] = '\0';
                printf("Copied String: %s\n", str2);
                break;
            default: printf("Invalid!\n");
        }
    }
    return 0;
}
