#include<stdio.h>
#include <stdlib.h>




int* productExceptSelf(int* nums, int n, int* returnSize) 
{
    
    *returnSize = n;
    
    if (n == 0) 
    {
        return NULL;
    }

    
    int* answer = (int*)malloc(n * sizeof(int));
    if (answer == NULL) 
    {
        
        fprintf(stderr, "Memory allocation failed.\n");
        return NULL;
    }

    
    answer[0] = 1;
    
    
    for (int i = 1; i < n; i++) 
    {
        
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    
    
    int right_product = 1;

    
    for (int i = n - 1; i >= 0; i--) 
    {
        
        answer[i] = answer[i] * right_product;
        
        
        right_product = right_product * nums[i];
    }

    return answer;
}

int main() 
{
    int n;

   
    printf("Enter the number of elements in the array (up to 100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) 
    {
        printf("Invalid input for array size. Exiting.\n");
        return 1;
    }

   
    int* nums = (int*)malloc(n * sizeof(int));
    if (nums == NULL) 
    {
        fprintf(stderr, "Memory allocation failed for input array.\n");
        return 1;
    }

    
    printf("Enter the %d elements of the array separated by spaces:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) 
        {

            printf("Invalid input for array element. Exiting.\n");
            free(nums);
            return 1;
        }
    }

    int returnSize = 0;
   
    int* answer = productExceptSelf(nums, n, &returnSize);

    if (answer != NULL)
    {
       
        printf("\nInput Array:\t[");
        for (int i = 0; i < n; i++) 
        {
            printf("%d%s", nums[i], (i == n - 1 ? "" : ", "));
        }
        printf("]\n");

        printf("Result Array:\t[");
        for (int i = 0; i < returnSize; i++) 
        {
            printf("%d%s", answer[i], (i == returnSize - 1 ? "" : ", "));
        }
        printf("]\n");

        
        free(answer);
    }
    
    free(nums);
    return 0;
}