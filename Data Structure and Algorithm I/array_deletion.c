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

    int position;

    // Input the position to delete
    printf("Enter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position >= size) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left to fill the gap
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;  // Decrease the size of the array

    // Display the updated array
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
