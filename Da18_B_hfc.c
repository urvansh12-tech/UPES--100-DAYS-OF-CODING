//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int num1, num2;
    int hcf;

    printf("Enter first positive integer: ");
    scanf("%d", &num1);
    printf("Enter second positive integer: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1; 
    }

    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }

    hcf = num1; 

    printf("The HCF (GCD) of the two numbers is: %d\n", hcf);

    return 0;
}
