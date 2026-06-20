// Write a program to Find column-wise sum. 

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nCalculating Column-wise Sum:\n");
    
    for (int j = 0; j < cols; j++) {
        int colSum = 0; 
        
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }

        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}