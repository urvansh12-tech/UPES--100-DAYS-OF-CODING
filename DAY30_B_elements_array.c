//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int arr[] = {10, -5, 0, 45, -20, 0, 7, -12}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    // Loop through each element of the array
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++; // Increment positive count if element is greater than 0
        } else if (arr[i] < 0) {
            negative_count++; // Increment negative count if element is less than 0
        } else {
            zero_count++; // Increment zero count if element is equal to 0
        }
    }

    // Print the results
    printf("Count of Positive elements: %d\n", positive_count);
    printf("Count of Negative elements: %d\n", negative_count);
    printf("Count of Zero elements: %d\n", zero_count);

    return 0;
}