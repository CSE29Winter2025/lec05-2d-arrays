#include <stdio.h>
#include <stdlib.h>

void print_2d_array(int **arr, int rows, int cols);
void initialize_2d_array(int **arr, int rows, int cols);

int main() {
    // Allocate memory for a 2D array
    int** arr = malloc(3 * sizeof(int*));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        arr[i] = malloc(4 * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    initialize_2d_array(arr, 3, 4);
    print_2d_array(arr, 3, 4);

    // Free the memory
    for (int i = 0; i < 3; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;

}

void print_2d_array(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void initialize_2d_array(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = i * cols + j;
        }
    }
}
