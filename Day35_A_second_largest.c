//Find the second largest element in an array.
#include <stdio.h>
#include <limits.h> // Required for INT_MIN

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Handle edge cases: array with less than 2 elements
    if (n < 2) {
        printf("Array must have at least two elements to find the second largest.\n");
        return 1; // Indicate an error
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Iterate through the array to find the largest and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Current largest becomes the second largest
            largest = arr[i];       // Current element becomes the new largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            // If current element is not the largest but is greater than secondLargest
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no distinct second largest element (e.g., all elements are the same).\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
