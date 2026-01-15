#include <stdio.h>

int main() {
    int n, i;

    // Input the number of elements
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);

    // Declare array
    int arr[n];

    // ask how many numbers
    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("The values store into the array are : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Display array in reverse
    printf("The values store into the array in reverse are : ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

