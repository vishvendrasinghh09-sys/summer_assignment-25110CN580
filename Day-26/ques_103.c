// Write a program to Create ATM simulation. 

#include <stdio.h>

int main() {
    int pin = 1234, entered_pin, choice;
    float balance = 5000.00;
    float deposit_amount, withdraw_amount;
    int attempts = 0;

    // PIN Authentication
    while (attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == pin) {
            printf("\nPIN accepted. Welcome!\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. You have %d attempts left.\n\n", 3 - attempts);
        }
    }

    if (attempts == 3) {
        printf("Too many incorrect attempts. Card locked.\n");
        return 0;
    }

    // Main ATM Menu
    do {
        printf("\n=============================");
        printf("\n    ATM MANAGEMENT SYSTEM    ");
        printf("\n=============================");
        printf("\n1. Check Balance");
        printf("\n2. Cash Deposit");
        printf("\n3. Cash Withdraw");
        printf("\n4. Exit");
        printf("\n=============================");
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("\nEnter amount to deposit: $");
                scanf("%f", &deposit_amount);
                if (deposit_amount > 0) {
                    balance += deposit_amount;
                    printf("Successfully deposited $%.2f\n", deposit_amount);
                    printf("New Balance: $%.2f\n", balance);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &withdraw_amount);
                if (withdraw_amount > balance) {
                    printf("Insufficient balance!\n");
                } else if (withdraw_amount <= 0) {
                    printf("Invalid withdrawal amount.\n");
                } else {
                    balance -= withdraw_amount;
                    printf("Please collect your cash.\n");
                    printf("New Balance: $%.2f\n", balance);
                }
                break;
            case 4:
                printf("\nThank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
