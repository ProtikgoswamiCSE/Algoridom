#include <stdio.h>

int BinarySearch(int arr[], int low, int high, int key) {
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, target;

    printf("Enter the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its first occurrence: ");
    scanf("%d", &target);

    int result = BinarySearch(arr, 0, n - 1, target);
    if (result != -1) {
        printf("First occurrence of %d found at index %d in the array.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

