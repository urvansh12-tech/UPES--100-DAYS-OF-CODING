#include <stdio.h>

int main() {
    int i, j;

    // first star
    printf("*\n\n");

    // increasing pattern (2 to 5 stars)
    for (i = 2; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    // decreasing pattern (4 to 1 stars)
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        if (i != 1)  // avoid extra blank line after last star
            printf("\n");
    }

    return 0;
}
//Write a program to print the following pattern:

