//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, swapped_num;
    int first_digit, last_digit;
    int power_of_ten = 1;
    int temp_num;
    int num_digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative number.\n");
        return 1; 
    }
    if (num < 10) { 
        printf("Number after swapping first and last digits: %d\n", num);
        return 0;
    }

    last_digit = num % 10;

    temp_num = num;
    while (temp_num >= 10) {
        temp_num /= 10;
        power_of_ten *= 10;
        num_digits++;
    }
    first_digit = temp_num; 

    swapped_num = num - (first_digit * power_of_ten); 
    swapped_num = swapped_num - last_digit;          

    swapped_num = swapped_num + (last_digit * power_of_ten);

    swapped_num = swapped_num + first_digit;

    printf("Number after swapping first and last digits: %d\n", swapped_num);

    return 0;
}

//Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0; 
}
