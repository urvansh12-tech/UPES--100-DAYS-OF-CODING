#include <stdio.h>
#include <stdlib.h>

//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

void findPreviousGreaterElement(int arr[], int n) 
{
    if (n == 0) {
        return;
    }

   
    for (int i = 0; i < n; i++) 
    {
        int previous_greater = -1;

        
        for (int j = i - 1; j >= 0; j--) 
        {
            
            if (arr[j] > arr[i]) 
            {
                
                previous_greater = arr[j];
                break;
            }
        }

        
        printf("%d%s", previous_greater, (i == n - 1) ? "" : ", ");
    }
    printf("\n"); 
}

void readArray(int arr[], int n)
{
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("arr[%d]: ", i);
        if (scanf("%d", &arr[i]) != 1) 
        {
            fprintf(stderr, "Error reading integer input.\n");
            exit(1);
        }
    }
}

int main() 
{
    int n;

    
    printf("Enter the number of elements (n): ");
    if (scanf("%d", &n) != 1 || n < 0) 
    {
        printf(stderr, "Invalid input for n.\n");
        return 1;
    }

    if (n == 0) 
    {
        printf("Output:\n\n");
        return 0;
    }

    
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    readArray(arr, n);

    printf("\nOutput:\n");
    findPreviousGreaterElement(arr, n);

    
    free(arr);

   

    
    int arr1[] = {1, 3, 2, 4};
    int n1 = 4;
    printf("Input 1: [1, 3, 2, 4]\nOutput 1:\n");
    findPreviousGreaterElement(arr1, n1);

    int arr2[] = {6, 8, 0, 1, 3};
    int n2 = 5;
    printf("\nInput 2: [6, 8, 0, 1, 3]\nOutput 2:\n");
    findPreviousGreaterElement(arr2, n2);

    
    int arr3[] = {1, 2, 3, 5};
    int n3 = 4;
    printf("\nInput 3: [1, 2, 3, 5]\nOutput 3:\n");
    findPreviousGreaterElement(arr3, n3);

    
    int arr4[] = {5, 4, 3, 1};
    int n4 = 4;
    printf("\nInput 4: [5, 4, 3, 1]\nOutput 4:\n");
    findPreviousGreaterElement(arr4, n4);


    return 0;
}



