#include <stdio.h>
#include <math.h>
#include <limits.h>


//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

int findPivotInteger(int n) 
{
    if (n <= 0) 
    {
        return -1; 
    }

    
    long long total_sum = (long long)n * (n + 1) / 2;

    
    double sqrt_sum_double = sqrt((double)total_sum);

   
    long long x_candidate = (long long)sqrt_sum_double;

    
    if (x_candidate * x_candidate != total_sum) 
    {
        
        return -1;
    }

    
    if (x_candidate > n || x_candidate < 1) 
    {
        return -1;
    }

  
    return (int)x_candidate;
}

int main() 
{
    
    int n1 = 8;
    int pivot1 = findPivotInteger(n1);
    printf("Input 1:\n");
    printf("n = %d\n", n1);
    printf("Output 1:\n");
    printf("%d\n", pivot1); 

    printf("\n");

    int n2 = 1;
    int pivot2 = findPivotInteger(n2);
    printf("Input 2:\n");
    printf("n = %d\n", n2);
    printf("Output 2:\n");
    printf("%d\n", pivot2); 

    printf("\n");

   
    int n3 = 4;
    int pivot3 = findPivotInteger(n3);
    printf("Input 3:\n");
    printf("n = %d\n", n3);
    printf("Output 3:\n");
    printf("%d\n", pivot3); 

    printf("\n");

    int n4 = 288;
    int pivot4 = findPivotInteger(n4);
    printf("Input 4:\n");
    printf("n = %d\n", n4);
    printf("Output 4:\n");
    printf("%d\n", pivot4); 

    printf("\n");

    
    int n5 = 289;
    int pivot5 = findPivotInteger(n5);
    printf("Input 5:\n");
    printf("n = %d\n", n5);
    printf("Output 5:\n");
    printf("%d\n", pivot5); 

    return 0;
}
