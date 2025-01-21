#include <stdio.h>

void initialize_2d_array(int arr[3][4], int rows, int cols);
void print_2d_array(int arr[3][4], int rows, int cols);

int main() {
    int arr[3][4];
    initialize_2d_array(arr, 3, 4);
    print_2d_array(arr, 3, 4);
    return 0;
}

void initialize_2d_array(int arr[3][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j;
        }
    }
}

void print_2d_array(int arr[3][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
