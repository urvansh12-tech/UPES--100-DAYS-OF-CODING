//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include <stdlib.h> 

int main() {
    long int num;
    printf("Enter an integer number: ");
    scanf("%ld", &num);

    if (num < 0) {
        num = abs(num); 
    }

    int digit_counts[10] = {0}; 
    int digit;

    if (num == 0) {
        printf("The most frequent digit is: 0\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10; 
        digit_counts[digit]++; 
        num /= 10;
    }

    int max_count = -1;
    int most_frequent_digit = -1;

    for (int i = 0; i < 10; i++) {
        if (digit_counts[i] > max_count) {
            max_count = digit_counts[i];
            most_frequent_digit = i;
        }
    }

    printf("The most frequent digit is: %d\n", most_frequent_digit);

    return 0;
}