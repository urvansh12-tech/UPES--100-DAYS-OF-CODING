#include<stdio.h>

\\Write a program to convert temperature from Celsius to Fahrenheit

int main() 
 {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
