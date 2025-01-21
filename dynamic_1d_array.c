#include <stdio.h>
#include <stdlib.h>

void initialize_array(int *arr, int length);
void print_1d_array(int *arr, int length);

int main() {
    int *pa = malloc(5 * sizeof(int));
    if (pa == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    initialize_array(pa, 5);

    print_1d_array(pa, 5);

    free(pa);
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
