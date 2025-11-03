//Delete an element from an array.
#include <stdio.h>

// Function to delete an element by value
void deleteElementByValue(int arr[], int *size, int valueToDelete) {
    int i, j;
    int found = 0; // Flag to check if the element is found

    // Find the element and its position
    for (i = 0; i < *size; i++) {
        if (arr[i] == valueToDelete) {
            found = 1;
            break; // Element found at index 'i'
        }
    }

    if (found) {
        // Shift elements to the left, starting from the found position
        for (j = i; j < *size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        // Decrease the effective size of the array
        (*size)--;
        printf("Element %d deleted successfully.\n", valueToDelete);
    } else {
        printf("Element %d not found in the array.\n", valueToDelete);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100]; // Declare an array with a maximum size
    int size;     // Current effective size of the array
    int valueToDelete;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printArray(arr, size);

    printf("Enter the element to delete: ");
    scanf("%d", &valueToDelete);

    deleteElementByValue(arr, &size, valueToDelete);

    printArray(arr, size);

    return 0;
}
