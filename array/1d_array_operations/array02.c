#include <stdio.h>

#define MAX_SIZE 100

int array[MAX_SIZE];
int size = 0;

void createArray() {
    printf("Enter the size of the array (maximum %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid size. Please enter a valid size.\n");
        return;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

void displayArray() {
    printf("Array Elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertElement(int elem, int pos) {
    if (pos < 0 || pos > size) {
        printf("Invalid position. Please enter a valid position.\n");
        return;
    }

    if (size == MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return;
    }

    for (int i = size; i > pos; i--) {
        array[i] = array[i - 1];
    }
    array[pos] = elem;
    size++;
}

void deleteElement(int pos) {
    if (pos < 0 || pos >= size) {
        printf("Invalid position. Please enter a valid position.\n");
        return;
    }

    for (int i = pos; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    size--;
}

int main() {
    int choice, elem, pos;

    do {
        printf("\nMenu:\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createArray();
                break;
            case 2:
                displayArray();
                break;
            case 3:
                printf("Enter the element to insert: ");
                scanf("%d", &elem);
                printf("Enter the position to insert at: ");
                scanf("%d", &pos);
                insertElement(elem, pos);
                break;
            case 4:
                printf("Enter the position to delete at: ");
                scanf("%d", &pos);
                deleteElement(pos);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    } while (choice != 5);

    return 0;
}