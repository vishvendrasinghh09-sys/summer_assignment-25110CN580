// wap to create number guessing game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;

    // Seed the random number generator using the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    secret_number = (rand() % 100) + 1;

    printf("=========================================\n");
    printf("    Welcome to the Number Guessing Game! \n");
    printf("=========================================\n");
    printf("I have picked a secret number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");

    // Loop until the player guesses the correct number
    do {
        printf("Enter your guess: ");
        
        // Handle non-integer inputs gracefully
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input! Please enter a valid number.\n\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        attempts++; // Increment attempt counter

        // Provide feedback on the guess
        if (guess > secret_number) {
            printf("Too high! 📈 Try guessing a lower number.\n\n");
        } else if (guess < secret_number) {
            printf("Too low! 📉 Try guessing a higher number.\n\n");
        } else {
            printf("\n🎉 CONGRATULATIONS! You got it!\n");
            printf("The secret number was indeed %d.\n", secret_number);
            printf("It took you exactly %d attempts to win.\n", attempts);
        }

    } while (guess != secret_number);

    return 0;
}
