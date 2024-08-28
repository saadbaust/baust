#include <stdio.h>

int main() {
    int size, i, searchElement, found = 0;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];  // Declare array with user-defined size

    // Input elements of the array
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Perform linear search
    for (i = 0; i < size; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            break;
        }
    }

    // Display the result
    if (found) {
        printf("Element %d found at position %d.\n", searchElement, i);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
