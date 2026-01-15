#include <stdio.h>

int main() {
    int n, i, j, count;

    // Ask how many numbers
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Read the numbers
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Print elements that appear only once
    printf("The unique elements found in the array are: ");

    for (i = 0; i < n; i++) {
        count = 0;

        // Count how many times this element appears
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If it appears only once, print it
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
