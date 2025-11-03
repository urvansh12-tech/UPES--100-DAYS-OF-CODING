//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    
    else if (num == 0) {
        printf("Factorial of 0 = 1\n");
    } 
    
    else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}
