// Write a program to Create menu-driven array operations system. 
#include <stdio.h>

int main() {
    int arr[100], size = 0, choice, i, pos, val;

    while (1) {
        printf("\n--- Array Menu ---\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        switch (choice) {
            case 1:
                printf("Enter value and position: ");
                scanf("%d %d", &val, &pos);
                for (i = size; i >= pos; i--) arr[i] = arr[i - 1];
                arr[pos - 1] = val;
                size++;
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                for (i = pos - 1; i < size - 1; i++) arr[i] = arr[i + 1];
                size--;
                break;
            case 3:
                printf("Array: ");
                for (i = 0; i < size; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            default: printf("Invalid!\n");
        }
    }
    return 0;
}
