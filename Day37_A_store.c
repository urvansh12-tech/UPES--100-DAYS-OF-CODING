//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;

    // Get matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSums[rows]; // Array to store the sum of each row

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row and store in rowSums array
    for (int i = 0; i < rows; i++) {
        int currentSum = 0;
        for (int j = 0; j < cols; j++) {
            currentSum += matrix[i][j];
        }
        rowSums[i] = currentSum; // Store the sum of the current row
    }

    // Print the row sums
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
