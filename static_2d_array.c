#include <stdio.h>
#define ROWS 3
#define COLS 4

void initialize_2d_array(int arr[ROWS][COLS], int rows, int cols);
void print_2d_array(int arr[ROWS][COLS], int rows, int cols);

int main() {
    int arr[ROWS][COLS];
    print_2d_array(arr, ROWS, COLS);
    initialize_2d_array(arr, ROWS, COLS);
    printf("***************************************************************\n");
    print_2d_array(arr, ROWS, COLS);
    return 0;
}

void initialize_2d_array(int arr[ROWS][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j;
        }
    }
}

void print_2d_array(int arr[ROWS][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
