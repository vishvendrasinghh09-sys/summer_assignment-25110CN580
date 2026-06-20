//  Write a program to Find row-wise sum. 
#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    // Example 2D array
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},    // Sum = 10
        {5, 6, 7, 8},    // Sum = 26
        {9, 1, 2, 3}     // Sum = 15
    };

    int targetSum;
    int found = 0;

    printf("Enter the row sum to find: ");
    scanf("%d", &targetSum);

    for (int i = 0; i < ROWS; i++) {
        int currentRowSum = 0;

        for (int j = 0; j < COLS; j++) {
            currentRowSum += matrix[i][j];
        }

        if (currentRowSum == targetSum) {
            printf("Row %d matches the sum %d.\n", i, targetSum);
            found = 1;
        }
    }

    if (!found) {
        printf("No row found with the sum %d.\n", targetSum);
    }

    return 0;
}