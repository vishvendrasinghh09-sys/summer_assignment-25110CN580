//  Write a program to Create mini employee management system. 

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 20

// Structure to store employee details
typedef struct {
    int id;
    char name[30];
    char designation[30];
    float salary;
} Employee;

// Global variables
Employee empList[MAX_EMPLOYEES];
int empCount = 0;

// Function declarations
void addEmployee();
void displayEmployees();
void searchEmployee();

int main() {
    int choice;

    while (1) {
        printf("\n=== MINI EMPLOYEE MANAGEMENT SYSTEM ===\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        
        // Read input and check for valid integer
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select between 1 and 4.\n");
        }
    }
    return 0;
}

// Function to add a new employee record
void addEmployee() {
    if (empCount >= MAX_EMPLOYEES) {
        printf("\nSystem Full! Cannot add more employees.\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &empList[empCount].id);
    
    // Clear newline character left in buffer by scanf
    while (getchar() != '\n'); 

    printf("Enter Name: ");
    fgets(empList[empCount].name, sizeof(empList[empCount].name), stdin);
    empList[empCount].name[strcspn(empList[empCount].name, "\n")] = 0; // Remove trailing newline

    printf("Enter Designation: ");
    fgets(empList[empCount].designation, sizeof(empList[empCount].designation), stdin);
    empList[empCount].designation[strcspn(empList[empCount].designation, "\n")] = 0;

    printf("Enter Salary: ");
    scanf("%f", &empList[empCount].salary);

    empCount++;
    printf("\nRecord added successfully!\n");
}

// Function to print all employee records
void displayEmployees() {
    if (empCount == 0) {
        printf("\nNo employee records found.\n");
        return;
    }

    printf("\n---------------------------------------------------------------\n");
    printf("%-5s %-20s %-20s %-10s\n", "ID", "Name", "Designation", "Salary");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < empCount; i++) {
        printf("%-5d %-20s %-20s %-10.2f\n", 
               empList[i].id, empList[i].name, empList[i].designation, empList[i].salary);
    }
    printf("---------------------------------------------------------------\n");
}

// Function to locate a specific employee using their ID
void searchEmployee() {
    if (empCount == 0) {
        printf("\nNo records available to search.\n");
        return;
    }

    int searchId, found = 0;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < empCount; i++) {
        if (empList[i].id == searchId) {
            printf("\nEmployee Found:\n");
            printf("ID: %d\n", empList[i].id);
            printf("Name: %s\n", empList[i].name);
            printf("Designation: %s\n", empList[i].designation);
            printf("Salary: $%.2f\n", empList[i].salary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nEmployee with ID %d not found.\n", searchId);
    }
}
