//Insert an element in an array at a given position.
#include <stdio.h>

void insertElement(int arr[], int *n, int position, int value) {
    // Check if the position is valid
    if (position < 0 || position > *n) {
        printf("Invalid position for insertion.\n");
        return;
    }

    // Shift elements to the right to make space
    for (int i = *n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[position] = value;

    // Increment the size of the array
    (*n)++;
}

int main() {
    int arr[100]; // Declare an array with a maximum capacity of 100
    int n = 5;    // Current number of elements in the array

    // Initialize the array with some elements
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int positionToInsert = 2; // Index where the new element will be inserted
    int valueToInsert = 25;   // The element to be inserted

    insertElement(arr, &n, positionToInsert, valueToInsert);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
