//Q27: Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main() {
    int n, sum = 0;
    printf("enter the number of odd terms(n): ");
    scanf("%d", &n);
    sum = n*n;
    printf("the sum of first %d odd numbers is: %d\n", n,sum);
    return 0;
}

