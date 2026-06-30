//  Write a program to Create salary management system. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

// Define the Employee structure
struct Employee {
    int id;
    char name[50];
    char designation[30];
    float basic_salary;
    float hra;          // House Rent Allowance
    float da;           // Dearness Allowance
    float pf;           // Provident Fund Deduction
    float gross_salary;
    float net_salary;
};

// Global variables to store data
struct Employee employees[MAX_EMPLOYEES];
int employee_count = 0;

// Function prototypes
void addEmployee();
void displayAllEmployees();
void searchEmployee();
void calculateSalary(struct Employee *emp);

int main() {
    int choice;

    while (1) {
        printf("\n=================================");
        printf("\n    SALARY MANAGEMENT SYSTEM     ");
        printf("\n=================================");
        printf("\n1. Add Employee Record");
        printf("\n2. Display All Employee Salaries");
        printf("\n3. Search Employee by ID");
        printf("\n4. Exit");
        printf("\n=================================");
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayAllEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                printf("\nExiting system. Goodbye!\n");
                exit(0);
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to calculate allowances and deductions
void calculateSalary(struct Employee *emp) {
    // Standard payroll breakdown rules
    emp->hra = emp->basic_salary * 0.20; // HRA is 20% of basic salary
    emp->da = emp->basic_salary * 0.10;  // DA is 10% of basic salary
    emp->pf = emp->basic_salary * 0.12;  // PF deduction is 12% of basic salary

    // Salary Formulas
    emp->gross_salary = emp->basic_salary + emp->hra + emp->da;
    emp->net_salary = emp->gross_salary - emp->pf;
}

// Function to add a new employee
void addEmployee() {
    if (employee_count >= MAX_EMPLOYEES) {
        printf("\nSystem database is full! Cannot add more records.\n");
        return;
    }

    struct Employee new_emp;

    printf("\nEnter Employee ID: ");
    scanf("%d", &new_emp.id);
    
    // Check if ID already exists
    for (int i = 0; i < employee_count; i++) {
        if (employees[i].id == new_emp.id) {
            printf("\nError: Employee ID %d already exists!\n", new_emp.id);
            return;
        }
    }

    printf("Enter Employee Name: ");
    getchar(); // Clear newline buffer character
    fgets(new_emp.name, sizeof(new_emp.name), stdin);
    new_emp.name[strcspn(new_emp.name, "\n")] = 0; // Remove trailing newline

    printf("Enter Designation: ");
    fgets(new_emp.designation, sizeof(new_emp.designation), stdin);
    new_emp.designation[strcspn(new_emp.designation, "\n")] = 0;

    printf("Enter Basic Salary: ");
    scanf("%f", &new_emp.basic_salary);

    // Calculate components dynamically
    calculateSalary(&new_emp);

    // Save to global array
    employees[employee_count] = new_emp;
    employee_count++;

    printf("\nEmployee record added successfully!\n");
}

// Function to display payroll details of all employees
void displayAllEmployees() {
    if (employee_count == 0) {
        printf("\nNo records found in the database.\n");
        return;
    }

    printf("\n%-5s %-20s %-15s %-10s %-8s %-8s %-8s %-10s", 
           "ID", "Name", "Designation", "Basic", "HRA", "DA", "PF", "Net Salary");
    printf("\n----------------------------------------------------------------------------------------");
    
    for (int i = 0; i < employee_count; i++) {
        printf("\n%-5d %-20s %-15s %-10.2f %-8.2f %-8.2f %-8.2f %-10.2f",
               employees[i].id, 
               employees[i].name, 
               employees[i].designation, 
               employees[i].basic_salary, 
               employees[i].hra, 
               employees[i].da, 
               employees[i].pf, 
               employees[i].net_salary);
    }
    printf("\n----------------------------------------------------------------------------------------\n");
}

// Function to search for an employee by ID
void searchEmployee() {
    if (employee_count == 0) {
        printf("\nNo records found to search.\n");
        return;
    }

    int search_id;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &search_id);

    for (int i = 0; i < employee_count; i++) {
        if (employees[i].id == search_id) {
            printf("\n--- Employee Details ---");
            printf("\nID: %d", employees[i].id);
            printf("\nName: %s", employees[i].name);
            printf("\nDesignation: %s", employees[i].designation);
            printf("\nBasic Salary: $%.2f", employees[i].basic_salary);
            printf("\nHouse Rent Allowance (HRA): $%.2f", employees[i].hra);
            printf("\nDearness Allowance (DA): $%.2f", employees[i].da);
            printf("\nProvident Fund Deduction (PF): $%.2f", employees[i].pf);
            printf("\n-----------------------");
            printf("\nGross Salary: $%.2f", employees[i].gross_salary);
            printf("\nNet Take-Home Salary: $%.2f", employees[i].net_salary);
            printf("\n-----------------------\n");
            return;
        }
    }
    printf("\nEmployee with ID %d not found.\n", search_id);
}
