//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0, numDigits = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; 
    int tempNumber = originalNumber;
    while (tempNumber != 0) {
        tempNumber /= 10;
        numDigits++;
    }

    tempNumber = originalNumber; 
    while (tempNumber != 0) {
        remainder = tempNumber % 10; 
        result += pow(remainder, numDigits); 
        tempNumber /= 10; 
    }

    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
