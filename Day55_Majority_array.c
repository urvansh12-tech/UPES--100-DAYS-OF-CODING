#include <stdio.h>
#include <stdlib.h>


//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.



int findMajorityElement(int nums[], int n) 
{
    if (n == 0) 
    {
        return -1;
    }

   
    int candidate = -1;
    int count = 0;

    for (int i = 0; i < n; i++) 
    {
        if (count == 0) 
        {
        
            candidate = nums[i];
            count = 1;
        } 
        else if (nums[i] == candidate) 
        {
            
            count++;
        } else {
            
            count--;
        }
    }

   
    int verification_count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (nums[i] == candidate) 
        {
            verification_count++;
        }
    }

    
    if (verification_count > (n / 2)) 
    {
        return candidate;
    } 
    else 
    {
        return -1;
    }
}

int main() 
{
    int n;

   
    printf("Enter the number of elements (n): ");
    if (scanf("%d", &n) != 1 || n < 0) 
    {
        printf("Invalid input for n.\n");
        return 1;
    }

    if (n == 0) 
    {
        printf("Output: -1\n");
        return 0;
    }

    
    int* nums = (int*)malloc(n * sizeof(int));
    if (nums == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("nums[%d]: ", i);
        if (scanf("%d", &nums[i]) != 1) 
        {
            printf("Invalid input for array element.\n");
            free(nums);
            return 1;
        }
    }

    
    int result = findMajorityElement(nums, n);
    printf("\nOutput:\n");
    printf("%d\n", result);

    
    free(nums);

    return 0;
}
