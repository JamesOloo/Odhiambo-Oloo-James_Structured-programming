#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int count = 0;      // Total elements inserted
int front = 0;      // Points to oldest element

// Insert a new sample
void insert(int value) {
    int index = count % BUFFER_SIZE;
    buffer[index] = value;
    count++;
    printf("Inserted %d at index %d\n", value, index);
}

// Print all samples in chronological order (oldest to newest)
void printBuffer() {
    printf("On print: oldest is ");

    if (count < BUFFER_SIZE) {
        // Buffer not full yet
        for (int i = 0; i < count; i++) {
            printf("%d ", buffer[i]);
        }
    } else {
        // Buffer is full, print from front to end, then 0 to front-1
        front = count % BUFFER_SIZE;

        for (int i = 0; i < BUFFER_SIZE; i++) {
            int index = (front + i) % BUFFER_SIZE;
            printf("%d ", buffer[index]);
        }
    }
    printf("\n");
}

int main() {
    int value;
    int choice;

    while (1) {
        printf("\n1. Insert value\n2. Print buffer\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insert(value);
        }
        else if (choice == 2) {
            printBuffer();
        }
        else if (choice == 3) {
            break;
        }
    }

    return 0;
}
