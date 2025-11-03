//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>

// Function to check if diagonal elements are distinct
bool areDiagonalElementsDistinct(int matrix[][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false; // Found a duplicate
            }
        }
    }
    return true; // All diagonal elements are distinct
}

int main() {
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[10][10]; // Assuming max size 10x10, adjust as needed

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (areDiagonalElementsDistinct(matrix, size)) {
        printf("The elements on the principal diagonal are distinct.\n");
    } else {
        printf("The elements on the principal diagonal are NOT distinct.\n");
    }

    return 0;
}