#include <stdio.h>

\\Write a program to calculate simple and compound interest for given principal, rate, and time

int main() 
 {
    float principal, rate, time;

    printf("Input 1:\n");
    scanf("%f %f %f", &principal, &rate, &time);

    float simple = (principal * rate * time) / 100;

    float amount = principal * pow((1 + rate / 100), time);
    float compound = amount - principal;

    printf("Output 1:\n");
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple, compound);

    return 0;
}
