// wap to create voter eliginility system.
#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("=========================================\n");
    printf("       VOTER ELIGIBILITY SYSTEM          \n");
    printf("=========================================\n");
    printf("Enter your age: ");
    
    // Read the integer input
    if (scanf("%d", &age) != 1) {
        printf("\nError: Invalid input. Please enter a valid number.\n");
        return 1; 
    }

    // Check for realistic and logical age parameters
    if (age < 0 || age > 120) {
        printf("\nError: Invalid age entered. Age must be between 0 and 120.\n");
    } 
    // Check eligibility
    else if (age >= 18) {
        printf("\nSuccess: You are %d years old. You are ELIGIBLE to vote!\n", age);
    } 
    else {
        int yearsLeft = 18 - age;
        printf("\nNotice: You are %d years old. You are NOT eligible to vote yet.\n", age);
        printf("You can vote in %d year(s).\n", yearsLeft);
    }

    printf("=========================================\n");
    return 0;
}
