#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.


void maxSlidingWindow(int* arr, int n, int k) 
{
    
    if (n < k || k <= 0) 
    {
        printf("Invalid input: Subarray size k must be > 0 and <= array size.\n");
        return;
    }

    
    int* deque = (int*)malloc(n * sizeof(int));
    if (deque == NULL) 
    {
        fprintf(stderr, "Memory allocation failed for deque.\n");
        return;
    }

    int front = 0; 
    int rear = -1; 

    
    for (int i = 0; i < k; i++) 
    {
        

        while (rear >= front && arr[i] >= arr[deque[rear]]) 
        {

            rear--;
        }
        
      
        deque[++rear] = i;
    }
    
    
    printf("Maximum elements for each window:\n");
   
    printf("%d", arr[deque[front]]);
    

    for (int i = k; i < n; i++) 
    {
        
        if (deque[front] <= i - k) 
        {
            front++;
        }

       
        while (rear >= front && arr[i] >= arr[deque[rear]]) 
        {
            rear--;
        }
        
        
        deque[++rear] = i;

       
        printf(" %d", arr[deque[front]]);
    }
    printf("\n");


    free(deque);
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

    
    printf("\nInput Array:\t[");
    for (int i = 0; i < n; i++) 
    {
        printf("%d%s", arr[i], (i == n - 1 ? "" : ", "));
    }
    printf("]\n");
    printf("Subarray Size k: %d\n", k);
    
    
    maxSlidingWindow(arr, n, k);

    
    free(arr);
    return 0;
}