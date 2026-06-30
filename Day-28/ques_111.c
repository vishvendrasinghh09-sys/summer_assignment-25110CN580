//  Write a program to Create ticket booking system. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOTAL_SEATS 50
#define TICKET_PRICE 15.00

// Structure to store booking details
struct Ticket {
    int seatNumber;
    char passengerName[50];
    int isBooked;
};

// Function prototypes
void initializeSeats(struct Ticket system[]);
void displaySeats(struct Ticket system[]);
void bookTicket(struct Ticket system[]);
void cancelTicket(struct Ticket system[]);
void viewBookingSummary(struct Ticket system[]);

int main() {
    struct Ticket bookingSystem[TOTAL_SEATS];
    int choice;

    // Initialize all seats to available
    initializeSeats(bookingSystem);

    while (1) {
        printf("\n==================================\n");
        printf("     TICKET BOOKING SYSTEM        \n");
        printf("==================================\n");
        printf("1. View Available Seats\n");
        printf("2. Book a Ticket\n");
        printf("3. Cancel a Ticket\n");
        printf("4. View All Bookings\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1:
                displaySeats(bookingSystem);
                break;
            case 2:
                bookTicket(bookingSystem);
                break;
            case 3:
                cancelTicket(bookingSystem);
                break;
            case 4:
                viewBookingSummary(bookingSystem);
                break;
            case 5:
                printf("\nThank you for using the system. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please select between 1 and 5.\n");
        }
    }
    return 0;
}

// Sets up empty seats initially
void initializeSeats(struct Ticket system[]) {
    for (int i = 0; i < TOTAL_SEATS; i++) {
        system[i].seatNumber = i + 1;
        system[i].isBooked = 0;
        strcpy(system[i].passengerName, "None");
    }
}

// Displays a structural map of seats
void displaySeats(struct Ticket system[]) {
    printf("\n------ SEAT MAP (Total Seats: %d) ------\n", TOTAL_SEATS);
    printf("[X] = Booked   [Seat No.] = Available\n\n");
    
    for (int i = 0; i < TOTAL_SEATS; i++) {
        if (system[i].isBooked == 1) {
            printf("[ X ]\t");
        } else {
            printf("[%02d]\t", system[i].seatNumber);
        }
        
        // Break line every 5 seats for structural alignment
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }
}

// Handles seat reservations
void bookTicket(struct Ticket system[]) {
    int seatNo;
    displaySeats(system);
    
    printf("\nEnter the seat number you want to book: ");
    scanf("%d", &seatNo);

    // Input bounds check
    if (seatNo < 1 || seatNo > TOTAL_SEATS) {
        printf("Error: Invalid seat number!\n");
        return;
    }

    // Checking availability
    if (system[seatNo - 1].isBooked == 1) {
        printf("Error: Seat %d is already occupied!\n", seatNo);
    } else {
        printf("Enter passenger name: ");
        while (getchar() != '\n'); // Clear trailing newlines
        fgets(system[seatNo - 1].passengerName, 50, stdin);
        
        // Remove trailing newline from fgets
        system[seatNo - 1].passengerName[strcspn(system[seatNo - 1].passengerName, "\n")] = 0;
        
        system[seatNo - 1].isBooked = 1;
        
        printf("\nBooking Confirmed!\n");
        printf("Seat Number: %d\n", seatNo);
        printf("Passenger: %s\n", system[seatNo - 1].passengerName);
        printf("Total Amount Paid: $%.2f\n", TICKET_PRICE);
    }
}

// Removes a booking
void cancelTicket(struct Ticket system[]) {
    int seatNo;
    printf("\nEnter your seat number to cancel booking: ");
    scanf("%d", &seatNo);

    if (seatNo < 1 || seatNo > TOTAL_SEATS) {
        printf("Error: Invalid seat number!\n");
        return;
    }

    if (system[seatNo - 1].isBooked == 0) {
        printf("Error: This seat is not currently booked.\n");
    } else {
        printf("Booking for %s (Seat %d) has been successfully canceled.\n", 
               system[seatNo - 1].passengerName, seatNo);
        printf("Refund of $%.2f processed.\n", TICKET_PRICE);
        
        // Reset properties
        system[seatNo - 1].isBooked = 0;
        strcpy(system[No - 1].passengerName, "None");
    }
}

// Lists active bookings
void viewBookingSummary(struct Ticket system[]) {
    int foundBookings = 0;
    printf("\n------ ACTIVE RESERVATIONS ------\n");
    printf("%-10s %-30s %-10s\n", "Seat No.", "Passenger Name", "Fare");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < TOTAL_SEATS; i++) {
        if (system[i].isBooked == 1) {
            printf("%-10d %-30s $%.2f\n", system[i].seatNumber, system[i].passengerName, TICKET_PRICE);
            foundBookings++;
        }
    }

    if (foundBookings == 0) {
        printf("No active bookings found at the moment.\n");
    } else {
        printf("--------------------------------------------------\n");
        printf("Total Active Bookings: %d\n", foundBookings);
        printf("Total Revenue Collected: $%.2f\n", foundBookings * TICKET_PRICE);
    }
}
