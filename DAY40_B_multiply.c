//Multiply two matrices.
#include <stdio.h>

int main() {
    int m, n, p, q; // Dimensions of matrices
    int i, j, k;   // Loop counters

    printf("Enter the number of rows and columns for Matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns for Matrix B: ");
    scanf("%d %d", &p, &q);

    // Check for compatibility
    if (n != p) {
        printf("Matrix multiplication is not possible!\n");
        printf("Number of columns of Matrix A must equal number of rows of Matrix B.\n");
        return 1; // Exit with an error code
    }

    int matrixA[m][n];
    int matrixB[p][q];
    int resultMatrix[m][q];

    printf("Enter elements for Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements for Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            resultMatrix[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) { // Or k < p, since n == p
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A * B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%5d", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}