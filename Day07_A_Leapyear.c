#include <stdio.h>

\\Write a program to input a year and check whether it is a leap year or not using conditional statements

int main()
 {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    return 0;
}
