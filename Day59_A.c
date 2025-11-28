#include<stdio.h>
#include <stdlib.h>
#include <limits.h> 

//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.



int maxSubarraySum(int* arr, int n, int k) 
{
    
    if (n < k || k <= 0) 
    {
        
        return INT_MIN; 
    }

    int max_sum = INT_MIN;
    int current_sum = 0;

   
    for (int i = 0; i < k; i++) 
    {
        current_sum += arr[i];
    }

   
    max_sum = current_sum;

    for (int i = k; i < n; i++) 
    {
       
        current_sum = current_sum - arr[i - k] + arr[i];

        if (current_sum > max_sum) 
        {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() 
{
    int n, k;

    
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n < 1) 
    {
        printf("Invalid input for array size. Exiting.\n");
        return 1;
    }

   
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        fprintf(stderr, "Memory allocation failed for input array.\n");
        return 1;
    }

   
    printf("Enter the %d elements of the array separated by spaces:\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input for array element. Exiting.\n");
            free(arr);
            return 1;
        }
    }

   
    printf("Enter the subarray size k: ");
    if (scanf("%d", &k) != 1) 
    {
        printf("Invalid input for k. Exiting.\n");
        free(arr);
        return 1;
    }

    
    int maxSum = maxSubarraySum(arr, n, k);

    if (maxSum == INT_MIN) 
    {
        printf("\nInvalid input: Subarray size k (%d) must be greater than 0 and less than or equal to array size (%d).\n", k, n);
    } 
    else 
    {
        
        printf("\nInput Array:\t[");
        for (int i = 0; i < n; i++) 
        {
            printf("%d%s", arr[i], (i == n - 1 ? "" : ", "));
        }
        printf("]\n");
        printf("Subarray Size k: %d\n", k);
        printf("Maximum Subarray Sum: %d\n", maxSum);
    }
    
    
    free(arr);
    return 0;
}