// Write a program to Create marksheet generation system.

#include <stdio.h>
#include <string.h>

// Define a structure to store student details
struct Student {
    int roll_no;
    char name[50];
    int math;
    int science;
    int english;
    int history;
    int computer;
    int total;
    float percentage;
    char grade[5];
    char status[5];
};

// Function to calculate grades based on percentage
void calculate_grade(struct Student *s) {
    if (s->math < 40 || s->science < 40 || s->english < 40 || s->history < 40 || s->computer < 40) {
        strcpy(s->grade, "F");
        strcpy(s->status, "FAIL");
    } else {
        strcpy(s->status, "PASS");
        if (s->percentage >= 85) {
            strcpy(s->grade, "A+");
        } else if (s->percentage >= 70) {
            strcpy(s->grade, "A");
        } else if (s->percentage >= 60) {
            strcpy(s->grade, "B");
        } else if (s->percentage >= 50) {
            strcpy(s->grade, "C");
        } else {
            strcpy(s->grade, "D");
        }
    }
}

int main() {
    struct Student s;

    // Data Entry and Validation Section
    printf("===========================================\n");
    printf("        MARKSHEET GENERATION SYSTEM        \n");
    printf("===========================================\n");
    
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);
    getchar(); // Clear trailing newline from buffer

    printf("Enter Student Full Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // Remove trailing newline character

    // Loop until valid subject scores are provided
    do {
        printf("Enter Mathematics marks (0-100): ");
        scanf("%d", &s.math);
    } while (s.math < 0 || s.math > 100);

    do {
        printf("Enter Science marks (0-100): ");
        scanf("%d", &s.science);
    } while (s.science < 0 || s.science > 100);

    do {
        printf("Enter English marks (0-100): ");
        scanf("%d", &s.english);
    } while (s.english < 0 || s.english > 100);

    do {
        printf("Enter History marks (0-100): ");
        scanf("%d", &s.history);
    } while (s.history < 0 || s.history > 100);

    do {
        printf("Enter Computer Science marks (0-100): ");
        scanf("%d", &s.computer);
    } while (s.computer < 0 || s.computer > 100);

    // Processing Logic
    s.total = s.math + s.science + s.english + s.history + s.computer;
    s.percentage = s.total / 5.0;
    calculate_grade(&s);

    // Formatted Marksheet Output Section
    printf("\n\n");
    printf("#####################################################\n");
    printf("#                EXAMINATION REPORT                 #\n");
    printf("#####################################################\n");
    printf("  Roll Number : %-15d Name : %-20s\n", s.roll_no, s.name);
    printf("-----------------------------------------------------\n");
    printf("  SUBJECT NAME          MAX MARKS        MARKS GAINED \n");
    printf("-----------------------------------------------------\n");
    printf("  Mathematics              100               %3d\n", s.math);
    printf("  Science                  100               %3d\n", s.science);
    printf("  English                  100               %3d\n", s.english);
    printf("  History                  100               %3d\n", s.history);
    printf("  Computer Science         100               %3d\n", s.computer);
    printf("-----------------------------------------------------\n");
    printf("  AGGREGATE TOTAL:         500               %3d\n", s.total);
    printf("  PERCENTAGE SCORE:                        %6.2f%%\n", s.percentage);
    printf("  FINAL GRADE:                               %s\n", s.grade);
    printf("  ACADEMIC STATUS:                         %s\n", s.status);
    printf("#####################################################\n");

    return 0;
}
