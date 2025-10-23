#include <stdio.h>

\\Write a program to find and display the sum of the first n natural numbers

int main()
 {
    int n, i, sum = 0;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            sum += i;
        }

        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}

