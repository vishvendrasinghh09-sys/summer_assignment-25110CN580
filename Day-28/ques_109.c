// Write a program to Create library management system. 
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Define a structure to store book details
struct Book {
    int id;
    char title[100];
    char author[100];
    int isIssued; // 0 = Available, 1 = Issued
};

// Global array and counter to manage records
struct Book library[MAX_BOOKS];
int bookCount = 0;

// Function declarations
void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();

int main() {
    int choice;

    while (1) {
        printf("\n=================================");
        printf("\n    LIBRARY MANAGEMENT SYSTEM    ");
        printf("\n=================================");
        printf("\n1. Add New Book");
        printf("\n2. Display All Books");
        printf("\n3. Search Book by ID");
        printf("\n4. Issue a Book");
        printf("\n5. Return a Book");
        printf("\n6. Exit");
        printf("\n=================================");
        printf("\nEnter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                printf("\nExiting system. Have a great day!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please select between 1 and 6.\n");
        }
    }
    return 0;
}

// Function to add a new book to the library
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("\nLibrary is full! Cannot add more books.\n");
        return;
    }

    struct Book newBook;
    
    printf("\nEnter Book ID (Integer): ");
    scanf("%d", &newBook.id);
    
    // Check if the Book ID already exists
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == newBook.id) {
            printf("\nError: A book with ID %d already exists!\n", newBook.id);
            return;
        }
    }

    // Clear the input buffer before reading strings
    getchar(); 
    
    printf("Enter Book Title: ");
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0; // Remove trailing newline

    printf("Enter Author Name: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0; // Remove trailing newline

    newBook.isIssued = 0; // Set initial availability to Available

    library[bookCount] = newBook;
    bookCount++;

    printf("\nBook added successfully!\n");
}

// Function to display all existing records
void displayBooks() {
    if (bookCount == 0) {
        printf("\nNo books available in the library.\n");
        return;
    }

    printf("\n%-10s %-30s %-25s %-15s", "Book ID", "Title", "Author", "Status");
    printf("\n-----------------------------------------------------------------------------");
    for (int i = 0; i < bookCount; i++) {
        printf("\n%-10d %-30s %-25s %-15s", 
               library[i].id, 
               library[i].title, 
               library[i].author, 
               library[i].isIssued ? "Issued" : "Available");
    }
    printf("\n");
}

// Function to search for a specific book record by its ID
void searchBook() {
    if (bookCount == 0) {
        printf("\nNo books in the library to search.\n");
        return;
    }

    int searchId;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == searchId) {
            printf("\nBook Found Details:");
            printf("\nID: %d", library[i].id);
            printf("\nTitle: %s", library[i].title);
            printf("\nAuthor: %s", library[i].author);
            printf("\nStatus: %s\n", library[i].isIssued ? "Issued" : "Available");
            return;
        }
    }
    printf("\nBook with ID %d not found.\n", searchId);
}

// Function to change status of a book to 'Issued'
void issueBook() {
    int issueId;
    printf("\nEnter Book ID to issue: ");
    scanf("%d", &issueId);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == issueId) {
            if (library[i].isIssued == 1) {
                printf("\nSorry, this book is already issued to someone else.\n");
            } else {
                library[i].isIssued = 1;
                printf("\nBook successfully issued!\n");
            }
            return;
        }
    }
    printf("\nBook with ID %d not found.\n", issueId);
}

// Function to change status of a book to 'Available'
void returnBook() {
    int returnId;
    printf("\nEnter Book ID to return: ");
    scanf("%d", &returnId);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == returnId) {
            if (library[i].isIssued == 0) {
                printf("\nThis book is already in the library inventory.\n");
            } else {
                library[i].isIssued = 0;
                printf("\nBook successfully returned to the library!\n");
            }
            return;
        }
    }
    printf("\nBook with ID %d not found.\n", returnId);
}
