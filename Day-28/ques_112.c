//  Write a program to Create contact_management system.
#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100
#define NAME_LEN 50
#define PHONE_LEN 15

// Structure to hold contact details
struct Contact {
    char name[NAME_LEN];
    char phone[PHONE_LEN];
};

// Global variables to manage list state
struct Contact contacts[MAX_CONTACTS];
int contact_count = 0;

// Function declarations
void addContact();
void viewContacts();
void searchContact();
void deleteContact();

int main() {
    int choice;

    while (1) {
        printf("\n=== CONTACT MANAGEMENT SYSTEM ===\n");
        printf("1. Add New Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact by Name\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                printf("Exiting system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select between 1 and 5.\n");
        }
    }
    return 0;
}

// 1. Function to add a new contact
void addContact() {
    if (contact_count >= MAX_CONTACTS) {
        printf("Error: Contact book is full!\n");
        return;
    }

    struct Contact new_contact;
    
    // Clear input buffer leftover from main scanf
    while (getchar() != '\n');

    printf("Enter Name: ");
    fgets(new_contact.name, NAME_LEN, stdin);
    new_contact.name[strcspn(new_contact.name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter Phone Number: ");
    fgets(new_contact.phone, PHONE_LEN, stdin);
    new_contact.phone[strcspn(new_contact.phone, "\n")] = '\0'; // Remove trailing newline

    // Save to global array
    contacts[contact_count] = new_contact;
    contact_count++;
    
    printf("Contact added successfully!\n");
}

// 2. Function to display all saved contacts
void viewContacts() {
    if (contact_count == 0) {
        printf("No contacts found in the system.\n");
        return;
    }

    printf("\n--- All Saved Contacts ---\n");
    for (int i = 0; i < contact_count; i++) {
        printf("%d. Name: %s | Phone: %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

// 3. Function to find a contact by name
void searchContact() {
    if (contact_count == 0) {
        printf("No contacts found to search from.\n");
        return;
    }

    char search_name[NAME_LEN];
    int found = 0;

    while (getchar() != '\n'); // Clear buffer
    printf("Enter name to search: ");
    fgets(search_name, NAME_LEN, stdin);
    search_name[strcspn(search_name, "\n")] = '\0';

    for (int i = 0; i < contact_count; i++) {
        if (strcasecmp(contacts[i].name, search_name) == 0) { // Case-insensitive comparison
            printf("\nContact Found!\nName: %s\nPhone: %s\n", contacts[i].name, contacts[i].phone);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contact matching '%s' not found.\n", search_name);
    }
}

// 4. Function to delete an existing contact
void deleteContact() {
    if (contact_count == 0) {
        printf("No contacts available to delete.\n");
        return;
    }

    char delete_name[NAME_LEN];
    int found = 0;

    while (getchar() != '\n'); // Clear buffer
    printf("Enter name of the contact to delete: ");
    fgets(delete_name, NAME_LEN, stdin);
    delete_name[strcspn(delete_name, "\n")] = '\0';

    for (int i = 0; i < contact_count; i++) {
        if (strcasecmp(contacts[i].name, delete_name) == 0) {
            found = 1;
            // Shift remaining array entries left to clear the gap
            for (int j = i; j < contact_count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            contact_count--;
            printf("Contact deleted successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Contact matching '%s' not found.\n", delete_name);
    }
}
