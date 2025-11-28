#include <stdio.h>
#include <stdlib.h>




//Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.


void findNextGreaterElement(int arr[], int n) 
{
    if (n == 0) 
    {
        return; 
    }

    
    for (int i = 0; i < n; i++) 
    {
        int next_greater = -1; 
        
        
        for (int j = i + 1; j < n; j++)
        {
            
            if (arr[j] > arr[i]) 
            {
            
                next_greater = arr[j];
                break;
            }
        }

        
        printf("%d%s", next_greater, (i == n - 1) ? "" : ", ");
    }
    printf("\n"); 
}

int main() 
{
    
    int arr1[] = {1, 3, 2, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Input 1: arr = [1, 3, 2, 4]\n");
    printf("Output 1:\n");
    findNextGreaterElement(arr1, n1); 

   
    int arr2[] = {6, 8, 0, 1, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("\nInput 2: arr = [6, 8, 0, 1, 3]\n");
    printf("Output 2:\n");
    findNextGreaterElement(arr2, n2); 

  
    int arr3[] = {1, 2, 3, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("\nInput 3: arr = [1, 2, 3, 5]\n");
    printf("Output 3:\n");
    findNextGreaterElement(arr3, n3); 

    
    int arr4[] = {5, 4, 3, 1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("\nInput 4: arr = [5, 4, 3, 1]\n");
    printf("Output 4:\n");
    findNextGreaterElement(arr4, n4); 

    return 0;
}