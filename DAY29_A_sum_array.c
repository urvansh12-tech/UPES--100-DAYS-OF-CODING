//Find the sum of array elements.
#include <stdio.h>

int sumArrayElements(int arr[], int n) {
    int sum = 0; 
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int totalSum = sumArrayElements(arr, n);

    printf("The sum of array elements is: %d\n", totalSum);

    return 0;
}