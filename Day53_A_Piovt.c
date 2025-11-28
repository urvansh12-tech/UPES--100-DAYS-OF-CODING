#include <stdio.h>
#include <stdlib.h>



//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.




int findPivotIndex(int nums[], int n) 
{
    if (n == 0) 
    {
        return -1; 
    }

    
    long long total_sum = 0;
    for (int i = 0; i < n; i++) 
    {
        total_sum += nums[i];
    }

    
    long long left_sum = 0;
    for (int i = 0; i < n; i++) 
    {
        
        long long right_sum = total_sum - left_sum - nums[i];

        
        if (left_sum == right_sum) 
        {
                return i;
        }

        
        left_sum += nums[i];
    }

   
    return -1;
}

void printArray(int arr[], int n) 
{
    printf("[");
    for (int i = 0; i < n; i++) 
    {
        printf("%d%s", arr[i], (i == n - 1) ? "" : ",");
    }
    printf("]");
}

int main() 
{
    
    int nums1[] = {1, 7, 3, 6, 5, 6};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int pivot1 = findPivotIndex(nums1, n1);
    printf("Input 1:\n");
    printf("nums = ");
    printArray(nums1, n1);
    printf("\nOutput 1:\n");
    printf("%d\n", pivot1); 
    printf("\n");

    int nums2[] = {1, 2, 3};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    int pivot2 = findPivotIndex(nums2, n2);
    printf("Input 2:\n");
    printf("nums = ");
    printArray(nums2, n2);
    printf("\nOutput 2:\n");
    printf("%d\n", pivot2);
    printf("\n");

    
    int nums3[] = {2, 1, -1};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    int pivot3 = findPivotIndex(nums3, n3);
    printf("Input 3:\n");
    printf("nums = ");
    printArray(nums3, n3);
    printf("\nOutput 3:\n");
    printf("%d\n", pivot3); 
    printf("\n");

    
    int nums4[] = {-1, 1, 0};
    int n4 = sizeof(nums4) / sizeof(nums4[0]);
    int pivot4 = findPivotIndex(nums4, n4);
    printf("Input 4:\n");
    printf("nums = ");
    printArray(nums4, n4);
    printf("\nOutput 4:\n");
    printf("%d\n", pivot4);
    printf("\n");

    
    int nums5[] = {0, 0, 0};
    int n5 = sizeof(nums5) / sizeof(nums5[0]);
    int pivot5 = findPivotIndex(nums5, n5);
    printf("Input 5:\n");
    printf("nums = ");
    printArray(nums5, n5);
    printf("\nOutput 5:\n");
    printf("%d\n", pivot5); 

    return 0;
}