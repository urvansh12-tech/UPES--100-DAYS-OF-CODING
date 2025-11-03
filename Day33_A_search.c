//Search in a sorted array using binary search.
#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid; 
        }

        if (arr[mid] < target) {
            low = mid + 1;
        }
        
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target1 = 23;
    int target2 = 7;

    int result1 = binarySearch(arr, size, target1);
    if (result1 != -1) {
        printf("Element %d found at index %d.\n", target1, result1);
    } else {
        printf("Element %d not found in the array.\n", target1);
    }

    int result2 = binarySearch(arr, size, target2);
    if (result2 != -1) {
        printf("Element %d found at index %d.\n", target2, result2);
    } else {
        printf("Element %d not found in the array.\n", target2);
    }

    return 0;
}
