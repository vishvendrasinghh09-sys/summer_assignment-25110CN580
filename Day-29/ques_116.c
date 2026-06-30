// Write a program to Create inventory management system. 

#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product inv[100];
    int count = 0, choice, id_search;

    while (1) {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Item\n2. View Inventory\n3. Search Item\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        switch (choice) {
            case 1:
                printf("Enter ID, Name, Quantity, Price: ");
                scanf("%d %s %d %f", &inv[count].id, inv[count].name, &inv[count].quantity, &inv[count].price);
                count++;
                break;
            case 2:
                printf("ID\tName\tQty\tPrice\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t%d\t%.2f\n", inv[i].id, inv[i].name, inv[i].quantity, inv[i].price);
                }
                break;
            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &id_search);
                for (int i = 0; i < count; i++) {
                    if (inv[i].id == id_search) {
                        printf("Found: %s, Qty: %d, Price: %.2f\n", inv[i].name, inv[i].quantity, inv[i].price);
                        break;
                    }
                }
                break;
        }
    }
    return 0;
}
