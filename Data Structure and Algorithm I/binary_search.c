#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int searchElement) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == searchElement) {
            return mid;  // Element found
        } else if (arr[mid] < searchElement) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Element not found
}

int main() {
    int size, searchElement, result;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];  // Declare array with user-defined size

    // Input elements of the array (must be sorted)
    printf("Enter %d sorted elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    // Perform binary search
    result = binarySearch(arr, size, searchElement);

    // Display the result
    if (result != -1) {
        printf("Element %d found at position %d.\n", searchElement, result);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}
