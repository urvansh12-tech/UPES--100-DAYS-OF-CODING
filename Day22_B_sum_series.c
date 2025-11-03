//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0; 
    int numerator = 1;
    int denominator = 1;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            numerator += 2;
            denominator += 2;
            sum += (double)numerator / denominator;
        }
    }

    printf("Sum of the series up to %d terms: %.4f\n", n, sum);

    return 0;
}
