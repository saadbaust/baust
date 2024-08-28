#include <stdio.h>

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];  // Declare array with user-defined size

    // Input elements of the array
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int element, position;

    // Input the new element and the position to update
    printf("Enter the new element: ");
    scanf("%d", &element);
    printf("Enter the position to update (0 to %d): ", size - 1);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position >= size) {
        printf("Invalid position!\n");
        return 1;
    }

    // Update the element at the given position
    arr[position] = element;

    // Display the updated array
    printf("Array after update: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
