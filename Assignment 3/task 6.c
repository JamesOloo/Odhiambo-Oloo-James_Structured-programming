#include <stdio.h>

void incrementByValue(int num) {
    num++;
    printf("Inside incrementByValue function: num = %d\n", num);
}


void incrementByReference(int *num) {
    (*num)++;
    printf("Inside incrementByReference function: num = %d\n", *num);
}

int main() {
    int value = 5;

    printf("Original value: %d\n\n", value);


    printf("=== Pass by Value ===\n");
    printf("Before incrementByValue: value = %d\n", value);
    incrementByValue(value);
    printf("After incrementByValue: value = %d\n\n", value);


    printf("=== Pass by Reference ===\n");
    printf("Before incrementByReference: value = %d\n", value);
    incrementByReference(&value);
    printf("After incrementByReference: value = %d\n", value);

    return 0;
}
