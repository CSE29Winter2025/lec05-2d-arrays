#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

void print_2d_array(int **arr, int rows, int cols);
void initialize_2d_array(int **arr, int rows, int cols);

int main() {
    // Allocate memory for a 2D array
    int** arr = malloc(ROWS * sizeof(int*));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < ROWS; i++) {
        arr[i] = malloc(COLS * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    print_2d_array(arr, ROWS, COLS);
    initialize_2d_array(arr, ROWS, COLS);
    printf("***************************************************************\n");
    print_2d_array(arr, ROWS, COLS);

    // Free the memory
    for (int i = 0; i < ROWS; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

void print_2d_array(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void initialize_2d_array(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j;
        }
    }
}
