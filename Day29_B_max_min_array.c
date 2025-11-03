//Find the maximum and minimum element in an array.
#include <stdio.h>

void findMinMax(int arr[], int n, int *max, int *min) {

    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) {
        
        if (arr[i] > *max) {
            *max = arr[i];
        }
        
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 5, 8, 20, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_val, min_val;

    findMinMax(arr, n, &max_val, &min_val);

    printf("Maximum element: %d\n", max_val);
    printf("Minimum element: %d\n", min_val);

    return 0;
}
