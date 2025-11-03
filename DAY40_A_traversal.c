//Perform diagonal traversal of a matrix.
#include <stdio.h>

void printPrincipalDiagonal(int rows, int cols, int matrix[rows][cols]) {
    printf("Principal Diagonal Elements: ");
    for (int i = 0; i < rows && i < cols; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printPrincipalDiagonal(3, 3, matrix); // Output: 1 5 9 
    return 0;
}