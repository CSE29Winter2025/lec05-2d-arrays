// Write a function that filters out the negative numbers from an array of integers.
// The function should take three parameters, an integer array, the length of the
// array, and a pointer to an integer that stores the length of the resulting array
// after filtering out the negative numbers. The function should return a pointer
// to the resulting array. The function should NOT modify the original array that
// is passed to it. The resulting array should contain only the positive numbers
// from the original array in the same order. If there are no positive numbers in
// the original array, the function should return NULL and set the length of the
// resulting array to 0.

// NOTE: The function should NOT use any built-in C library functions.

#include <stdio.h>
#include <stdlib.h>

/**
 * Filters out the negative numbers from an array of integers.
 * The function should return a pointer to the resulting array.
 * The function should NOT modify the original array that is passed to it.
 * The resulting array should contain only the positive numbers from the original
 * array in the same order.
 * If there are no positive numbers in the original array, the function should
 * return NULL and set the length of the resulting array to 0.
 */
int* filter_negatives(int arr[], int length, int* result_length) {
    if (arr == NULL || length <= 0) {
        *result_length = 0;
        return NULL;
    }

    // Count the number of positive elements
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] >= 0) {
            count++;
        }
    }

    // If no positive elements found, return NULL
    if (count == 0) {
        *result_length = 0;
        return NULL;
    }

    // Allocate memory for the resulting array
    int* result = (int*)malloc(count * sizeof(int));
    if (result == NULL) {
        *result_length = 0;
        return NULL;
    }

    // Copy positive elements to the resulting array
    int index = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] >= 0) {
            result[index] = arr[i];
            index++;
        }
    }

    *result_length = count;
    return result;
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7};
    int length = sizeof(arr) / sizeof(arr[0]);

    int result_length = 0;
    int* result = filter_negatives(arr, length, &result_length);

    if (result == NULL) {
        printf("No positive numbers found.\n");
    } else {
        for (int i = 0; i < result_length; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    }

    return 0;
}


