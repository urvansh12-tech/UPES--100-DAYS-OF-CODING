//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num;
    int i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Binary representation of %d: ", num);

    for (i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    return 0;
}
