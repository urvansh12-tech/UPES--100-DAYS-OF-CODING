//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long binaryNum;
    long long complementNum = 0;
    long long tempNum;
    long long powerOfTen = 1;

    printf("Enter a binary number (e.g., 10110): ");
    scanf("%lld", &binaryNum);

    tempNum = binaryNum;

    while (tempNum > 0) {
        int digit = tempNum % 10; 

        if (digit == 0) {
            complementNum += 1 * powerOfTen; 
        } else if (digit == 1) {
            complementNum += 0 * powerOfTen; 
        } else {
            printf("Invalid binary input. Please enter only 0s and 1s.\n");
            return 1; 
        }

        tempNum /= 10; 
        powerOfTen *= 10;
    }

    printf("Original binary number: %lld\n", binaryNum);
    printf("1's complement: %lld\n", complementNum);

    return 0;
}
