// Write a program to Check symmetric matrix. 
#include <stdio.h>
int main() {
    int rows, cols;
    int isSymmetric = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("The matrix must be square (rows = columns) to be symmetric.\n");
        return 0;
    }

    int matrix[rows][cols];
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) { 
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;          
            }
        }
        if (!isSymmetric) {
            break; 
        }
    }
    if (isSymmetric) {
        printf("The matrix is a Symmetric Matrix.\n");
    } else {
        printf("The matrix is NOT a Symmetric Matrix.\n");
    }

    return 0;
}