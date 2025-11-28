#include<stdio.h>

//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.


int main()
{
    int n, x;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);      
    
    }

    printf("Enter the target element to find first and last occurrence: ");
    scanf("%d", &x);

    int f = -1, l = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            if(f == -1)
                f = i;
            l = i;
        }
    }

    printf("%d,%d\n", f, l);
    return 0;
}
