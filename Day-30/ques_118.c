//  Write a program to Create mini library system. 
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Define a structure to represent a book
struct Book {
    int id;
    char title[50];
    char author[50];
    int isAvailable; 
};

// Global variables
struct Book library[MAX_BOOKS];
int bookCount = 0;

// Function Prototypes
void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();

int main() {
    int choice;

    while (1) {
        printf("\n=================================");
        printf("\n*** MINI LIBRARY SYSTEM ***");
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
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: 
                printf("\nThank you for using the Mini Library System! Goodbye.\n");
                return 0;
            default: 
                printf("\nInvalid choice! Please choose between 1 and 6.\n");
        }
    }
    return 0;
}

// 1. Function to add a new book to the system
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("\nLibrary is full! Cannot add more books.\n");
        return;
    }

    struct Book newBook;
    printf("\nEnter Book ID (Integer): ");
    scanf("%d", &newBook.id);
    
    // Clear newline character left in input buffer
    getchar(); 

    printf("Enter Book Title: ");
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0; // Remove trailing newline

    printf("Enter Author Name: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0; // Remove trailing newline

    newBook.isAvailable = 1; // Default status: Available

    library[bookCount] = newBook;
    bookCount++;

    printf("\nBook '%s' added successfully!\n", newBook.title);
}

// 2. Function to display all existing books
void displayBooks() {
    if (bookCount == 0) {
        printf("\nNo books available in the library yet.\n");
        return;
    }

    printf("\n%-10s %-25s %-20s %-15s\n", "Book ID", "Title", "Author", "Status");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < bookCount; i++) {
        printf("%-10d %-25s %-20s %-15s\n", 
               library[i].id, 
               library[i].title, 
               library[i].author, 
               library[i].isAvailable ? "Available" : "Issued");
    }
}

// 3. Function to look up a book by its unique ID
void searchBook() {
    if (bookCount == 0) {
        printf("\nThe library database is empty.\n");
        return;
    }

    int searchId, found = 0;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == searchId) {
            printf("\n--- Book Found ---");
            printf("\nID: %d", library[i].id);
            printf("\nTitle: %s", library[i].title);
            printf("\nAuthor: %s", library[i].author);
            printf("\nStatus: %s\n", library[i].isAvailable ? "Available" : "Issued");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nBook with ID %d not found.\n", searchId);
    }
}

// 4. Function to change status to 'Issued' (Borrowed)
void issueBook() {
    int id, found = 0;
    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            found = 1;
            if (library[i].isAvailable == 1) {
                library[i].isAvailable = 0; // Mark as borrowed
                printf("\nBook '%s' has been issued successfully.\n", library[i].title);
            } else {
                printf("\nSorry, this book is already issued to someone else.\n");
            }
            break;
        }
    }

    if (!found) {
        printf("\nBook with ID %d does not exist.\n", id);
    }
}

// 5. Function to change status back to 'Available'
void returnBook() {
    int id, found = 0;
    printf("\nEnter Book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            found = 1;
            if (library[i].isAvailable == 0) {
                library[i].isAvailable = 1; // Mark as available
                printf("\nBook '%s' returned successfully.\n", library[i].title);
            } else {
                printf("\nThis book is already available in the library.\n");
            }
            break;
        }
    }

    if (!found) {
        printf("\nBook with ID %d does not belong to this library.\n", id);
    }
}
