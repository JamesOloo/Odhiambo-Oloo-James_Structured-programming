#include <stdio.h>

int main() {
    int n, i, value, pos;

    // Ask array size
    printf("Input the size of array :");
    scanf("%d", &n);

    int arr[n + 1];  // Extra space for new element

    // Read the numbers
    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Print current array
    printf("The current list of the array :");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask what value to insert and where
    printf("Input the value to be inserted :");
    scanf("%d", &value);

    printf("Input the Position, where the value to be inserted :");
    scanf("%d", &pos);

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value
    arr[pos] = value;

    // Print new array
    printf("After Insert the element the new list is :");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
