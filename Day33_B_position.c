//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

void insertSorted(int arr[], int *size, int capacity, int element) {
    if (*size >= capacity) {
        printf("Error: Array is full. Cannot insert more elements.\n");
        return;
    }

    int i = *size - 1;

    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;
    (*size)++;
}

void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int capacity = 10;
    int arr[capacity];
    int size = 5; 

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    printf("Original ");
    printArray(arr, size);

    int elementToInsert = 35;
    printf("Inserting %d...\n", elementToInsert);
    insertSorted(arr, &size, capacity, elementToInsert);
    printf("After insertion: ");
    printArray(arr, size);

    elementToInsert = 5;
    printf("Inserting %d...\n", elementToInsert);
    insertSorted(arr, &size, capacity, elementToInsert);
    printf("After insertion: ");
    printArray(arr, size);

    elementToInsert = 60;
    printf("Inserting %d...\n", elementToInsert);
    insertSorted(arr, &size, capacity, elementToInsert);
    printf("After insertion: ");
    printArray(arr, size);

    return 0;
}
