//wap to develop complete mini projects using arrays,strigs and functions
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

// Function Prototypes
void displayMenu();
void addStudent(int ids[], char names[][NAME_LENGTH], float grades[], int *count);
void displayAllStudents(const int ids[], const char names[][NAME_LENGTH], const float grades[], int count);
void searchStudent(const int ids[], const char names[][NAME_LENGTH], const float grades[], int count);
void calculateAverage(const float grades[], int count);

int main() {
    // Memory allocation using Arrays and Strings
    int studentIDs[MAX_STUDENTS];
    char studentNames[MAX_STUDENTS][NAME_LENGTH]; // 2D Array for strings
    float studentGrades[MAX_STUDENTS];
    int totalStudents = 0;
    int choice;

    printf("=== Welcome to the Student Database Mini Project ===\n");

    while (1) {
        displayMenu();
        printf("Enter your choice (1-5): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input type. Exiting.\n");
            break;
        }

        // Clean newline buffer from input
        getchar(); 

        switch (choice) {
            case 1:
                addStudent(studentIDs, studentNames, studentGrades, &totalStudents);
                break;
            case 2:
                displayAllStudents(studentIDs, studentNames, studentGrades, totalStudents);
                break;
            case 3:
                searchStudent(studentIDs, studentNames, studentGrades, totalStudents);
                break;
            case 4:
                calculateAverage(studentGrades, totalStudents);
                break;
            case 5:
                printf("\nThank you for using the system. Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid selection! Please choose between 1 and 5.\n");
        }
    }
    return 0;
}

// Function to print the main control dashboard
void displayMenu() {
    printf("\n-------------------------------------\n");
    printf("        MAIN MENU SYSTEM             \n");
    printf("-------------------------------------\n");
    printf("1. Add New Student\n");
    printf("2. Display All Records\n");
    printf("3. Search Student by Name\n");
    printf("4. Calculate Class Average Grade\n");
    printf("5. Exit Project\n");
    printf("-------------------------------------\n");
}

// Function to collect data and write to arrays and strings
void addStudent(int ids[], char names[][NAME_LENGTH], float grades[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("\nDatabase capacity reached! Cannot add more students.\n");
        return;
    }

    printf("\nEnter Student ID (Integer): ");
    scanf("%d", &ids[*count]);
    getchar(); // Clear trailing newline buffer

    printf("Enter Student Name: ");
    // Safely reads full string line containing spaces
    fgets(names[*count], NAME_LENGTH, stdin);
    // Remove the newline character caught by fgets
    names[*count][strcspn(names[*count], "\n")] = '\0';

    printf("Enter Grade (0.0 - 100.0): ");
    scanf("%f", &grades[*count]);

    (*count)++; // Step up the total student tracking element
    printf("\nStudent recorded successfully!\n");
}

// Function to safely loop and print full array lists
void displayAllStudents(const int ids[], const char names[][NAME_LENGTH], const float grades[], int count) {
    if (count == 0) {
        printf("\nNo student records available to display.\n");
        return;
    }

    printf("\n==================================================\n");
    printf("%-10s %-25s %-10s\n", "ID", "Name", "Grade");
    printf("==================================================\n");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-25s %-10.2f\n", ids[i], names[i], grades[i]);
    }
    printf("==================================================\n");
}

// Function checking matches using built-in string functions
void searchStudent(const int ids[], const char names[][NAME_LENGTH], const float grades[], int count) {
    if (count == 0) {
        printf("\nThe database is empty.\n");
        return;
    }

    char queryName[NAME_LENGTH];
    int found = 0;

    printf("\nEnter the exact student name to look up: ");
    fgets(queryName, NAME_LENGTH, stdin);
    queryName[strcspn(queryName, "\n")] = '\0'; // Strip newline

    for (int i = 0; i < count; i++) {
        // String comparison utilizing string library function
        if (strcmp(names[i], queryName) == 0) { 
            printf("\nRecord Found!");
            printf("\nID: %d\nName: %s\nGrade: %.2f\n", ids[i], names[i], grades[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nNo matching student found named '%s'.\n", queryName);
    }
}

// Function aggregating values via array iteration loop
void calculateAverage(const float grades[], int count) {
    if (count == 0) {
        printf("\nNo scores available to compile statistics.\n");
        return;
    }

    float accumulation = 0.0;
    for (int i = 0; i < count; i++) {
        accumulation += grades[i];
    }

    float finalAverage = accumulation / count;
    printf("\nThe current class average mark across %d students is: %.2f\n", count, finalAverage);
}
