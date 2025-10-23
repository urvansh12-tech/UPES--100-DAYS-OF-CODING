#include <stdio.h>

\\Write a program to input an integer and check whether it is positive, negative or zero using nested if–else
  
int main() 
 {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check whether the number is positive, negative or zero
    if (num >= 0) {
        if (num == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    } else {
        printf("Negative\n");
    }

    return 0;
}
