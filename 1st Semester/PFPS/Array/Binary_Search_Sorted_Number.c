// AIM:- write a c program to perform binary search on a set of given sorted numbers

#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the target is present at the middle
        if (arr[mid] == target) {
            return mid; // Target found, return the index
        }

        // If the target is greater, ignore the left half
        else if (arr[mid] < target) {
            low = mid + 1;
        }

        // If the target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int sortedNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(sortedNumbers) / sizeof(sortedNumbers[0]);

    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Perform binary search
    int result = binarySearch(sortedNumbers, size, target);

    // Check and print the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
