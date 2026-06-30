// Write a program to Create menu-driven calculator. 
#include <stdio.h>

int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) break;

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1: printf("Result: %.2f\n", num1 + num2); break;
            case 2: printf("Result: %.2f\n", num1 - num2); break;
            case 3: printf("Result: %.2f\n", num1 * num2); break;
            case 4: 
                if (num2 != 0) printf("Result: %.2f\n", num1 / num2); 
                else printf("Error: Division by zero!\n"); 
                break;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
