//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int num) {
    int originalNum = num;
    long long sumOfFactorials = 0;
    int digit;

    while (num > 0) {
        digit = num % 10; 
        sumOfFactorials += factorial(digit); 
        num /= 10; 
    }

    if (sumOfFactorials == originalNum) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter a number to check if it is a strong number: ");
    scanf("%d", &number);

    if (isStrongNumber(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}
