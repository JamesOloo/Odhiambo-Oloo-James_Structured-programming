#include <stdio.h>

int main() {
    int rows = 6, cols = 4;
    int arr[6][4];
    int i, j, value = 1;

    // Initialize 2D array with values
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arr[i][j] = value;
            value++;
        }
    }

    // Print the 2D array
    printf("2D Array (6 rows x 4 columns):\n");
    printf("**************\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
