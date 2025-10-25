#include <stdio.h>

\\Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
      
        if (a == b && b == c)
            printf("Equilateral\n");
        else 
          if (a == b || b == c || a == c)
            printf("Isosceles\n");
        else
            printf("Scalene\n");
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
