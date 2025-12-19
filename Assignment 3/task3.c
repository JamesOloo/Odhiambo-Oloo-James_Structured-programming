#include <stdio.h>

int main() {
    int count = 10;
    int *pCount;
    pCount = &count;

    printf("Original value of count: %d\n", count);

    *pCount = *pCount + 5;

    printf("Updated value of count: %d\n", count);

    return 0;
}
