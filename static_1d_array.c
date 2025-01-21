#include<stdio.h>
#define SIZE 100

void initialize_array(int *arr, int length);
void print_1d_array(int *arr, int length);

int main() {
    int arr[SIZE];
    print_1d_array(arr, SIZE);
    initialize_array(arr, SIZE);
    printf("***************************************************************\n");
    print_1d_array(arr, SIZE);
    
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
