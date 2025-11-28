#include<stdio.h>

//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.


int main()
{


    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++ )
    {
        printf("Enter Elements:");
        scanf("%d", &arr[i]);

    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            printf("The index of the ceil of %d is: %d\n", x, i);
            return 0;
        }
    }
    printf("The ceil of %d does not exist in the array.\n", x);
    return -1;
}