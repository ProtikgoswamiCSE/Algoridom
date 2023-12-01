#include <stdio.h>

int binarysearch(int arr[], int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return arr[mid];
        }
        else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;

    printf("Enter the number of elements in the bitonic array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers in bitonic order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxElement = binarysearch(arr, 0, n - 1);

    if (maxElement != -1) {
        printf("Maximum element in the bitonic array: %d\n", maxElement);
    } else {
        printf("Invalid bitonic array.\n");
    }

    return 0;
}
