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

    // Input the element to insert and the position
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert (0 to %d): ", size);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    // Increase array size to insert new element
    size++;

    // Shift elements to the right to make space for the new element
    for (int i = size - 1; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the given position
    arr[position] = element;

    // Display the updated array
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
