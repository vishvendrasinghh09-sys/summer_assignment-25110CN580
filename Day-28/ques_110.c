//  Write a program to Create bank account system. 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define the structure for a Bank Account
struct BankAccount {
    int accountNumber;
    char name[100];
    float balance;
};

// Function prototypes
void createAccount(struct BankAccount *acc);
void deposit(struct BankAccount *acc);
void withdraw(struct BankAccount *acc);
void checkBalance(struct BankAccount *acc);

int main() {
    struct BankAccount account;
    account.accountNumber = 0; // Initialize account status as empty
    int choice;

    do {
        printf("\n=============================");
        printf("\n      BANK ACCOUNT SYSTEM    ");
        printf("\n=============================");
        printf("\n1. Create Account");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Check Balance");
        printf("\n5. Exit");
        printf("\n=============================");
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(&account);
                break;
            case 2:
                deposit(&account);
                break;
            case 3:
                withdraw(&account);
                break;
            case 4:
                checkBalance(&account);
                break;
            case 5:
                printf("\nThank you for using our Bank Account System. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}

void createAccount(struct BankAccount *acc) {
    printf("\nEnter Account Number: ");
    scanf("%d", &acc->accountNumber);
    
    // Clear input buffer to consume newline character
    while(getchar() != '\n'); 
    
    printf("Enter Account Holder Name: ");
    fgets(acc->name, sizeof(acc->name), stdin);
    acc->name[strcspn(acc->name, "\n")] = '\0'; // Remove trailing newline
    
    printf("Enter Initial Deposit Amount: ");
    scanf("%f", &acc->balance);
    
    if (acc->balance < 0) {
        printf("\nInitial balance cannot be negative. Setting balance to 0.00\n");
        acc->balance = 0.0;
    }
    
    printf("\nAccount created successfully for %s!\n", acc->name);
}

void deposit(struct BankAccount *acc) {
    if (acc->accountNumber == 0) {
        printf("\nNo account found! Please create an account first.\n");
        return;
    }

    float amount;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0) {
        acc->balance += amount;
        printf("\nSuccessfully deposited $%.2f. New Balance: $%.2f\n", amount, acc->balance);
    } else {
        printf("\nInvalid amount! Please enter a positive value.\n");
    }
}

void withdraw(struct BankAccount *acc) {
    if (acc->accountNumber == 0) {
        printf("\nNo account found! Please create an account first.\n");
        return;
    }

    float amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= acc->balance) {
        acc->balance -= amount;
        printf("\nSuccessfully withdrawn $%.2f. New Balance: $%.2f\n", amount, acc->balance);
    } else if (amount > acc->balance) {
        printf("\nTransaction failed! Insufficient funds.\n");
    } else {
        printf("\nInvalid amount! Please enter a positive value.\n");
    }
}

void checkBalance(struct BankAccount *acc) {
    if (acc->accountNumber == 0) {
        printf("\nNo account found! Please create an account first.\n");
        return;
    }

    printf("\n--- Account Details ---");
    printf("\nAccount Number: %d", acc->accountNumber);
    printf("\nAccount Holder: %s", acc->name);
    printf("\nCurrent Balance: $%.2f\n", acc->balance);
}
