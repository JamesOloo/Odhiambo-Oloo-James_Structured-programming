#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int length;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nYour name is: %s\n", name);

    length = strlen(name);
    printf("Length of your name: %d characters\n", length);

    return 0;
}
