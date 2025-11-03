//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int size;

    // Get the size of the square matrix from the user
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];
    int sum_main_diagonal = 0;

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the main diagonal elements
    for (int i = 0; i < size; i++) {
        sum_main_diagonal += matrix[i][i]; // Main diagonal elements have i == j
    }

    // Print the sum
    printf("The sum of the main diagonal elements is: %d\n", sum_main_diagonal);

    return 0;
}
