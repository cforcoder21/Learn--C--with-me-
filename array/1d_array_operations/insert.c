#include <stdio.h>

int main() {
    int arr[100] = {4, 5, 3, 10, 12, 18}; // Initial array
    int numElements = sizeof(arr[]) / sizeof(arr[0]); // Current number of elements in the array
    printf("%d ",numElements);
    // int newPosition = 5; // Index where you want to insert the new element
    // int newElement = 7; // Element to be inserted

    // // Check if the array is not full
    // if (numElements < 100) {
    //     // Shift elements to make space for the new element
    //     for (int i = numElements - 1; i >= newPosition; i--) {
    //         arr[i + 1] = arr[i];
    //     }

    //     // Insert the new element at the specified position
    //     arr[newPosition] = newElement;

    //     // Update the number of elements
    //     numElements++;

    //     // Print the updated array (iterating only over the actual elements)
    //     for (int i = 0; i < numElements; i++) {
    //         printf("%d ", arr[i]);
    //     }
    // } else {
    //     printf("Array is full. Cannot insert new element.\n");
    // }

    return 0;
}