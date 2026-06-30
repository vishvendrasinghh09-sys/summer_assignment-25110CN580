// Write a program to Create student record system using arrays and strings. 

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

struct Student {
    int rollNumber;
    char name[NAME_LENGTH];
    float marks;
};

// Function prototypes
void addStudent(struct Student students[], int *count);
void displayStudents(const struct Student students[], int count);
void searchStudent(const struct Student students[], int count);

int main() {
    struct Student database[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    do {
        printf("\n=== STUDENT RECORD SYSTEM ===\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(database, &studentCount);
                break;
            case 2:
                displayStudents(database, studentCount);
                break;
            case 3:
                searchStudent(database, studentCount);
                break;
            case 4:
                printf("Exiting system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Database full! Cannot add more records.\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &students[*count].rollNumber);
    

    while (getchar() != '\n'); 

    printf("Enter Student Name: ");
    fgets(students[*count].name, NAME_LENGTH, stdin);
    
    students[*count].name[strcspn(students[*count].name, "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);

    (*count)++;
    printf("Record added successfully!\n");
}

void displayStudents(const struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n%-10s %-30s %-5s\n", "Roll No", "Name", "Marks");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-30s %-5.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }
}

// Function to search a record by roll number
void searchStudent(const struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo student records found.\n");
        return;
    }

    int searchRoll, found = 0;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &searchRoll);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNumber == searchRoll) {
            printf("\nRecord Found!\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name:        %s\n", students[i].name);
            printf("Marks:       %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", searchRoll);
    }
}
