#include <stdio.h>

\\Write a program to input two numbers and display their sum, difference, product, and quotient
    
int main()
 {
    int seconds, hours, minutes;

    printf("Input 1:\n");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("Output 1:\n");
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

