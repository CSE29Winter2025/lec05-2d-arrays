#include<stdio.h>

void initialize_array(int *arr, int length);
void print_1d_array(int *arr, int length);

int main() {
    int arr[5];
    initialize_array(arr, 5);
    print_1d_array(arr, 5);
    return 0;
}

void initialize_array(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = 10 * (i + 1);
    }
}

void print_1d_array(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
