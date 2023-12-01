#include <stdio.h>
int findElement(int arr[], int low, int high, int n) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if ((mid == 0 || arr[mid] >= arr[mid - 1]) &&
            (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
            return arr[mid];
        }
        if (mid < n - 1 && arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers in the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int peakElement = findElement(arr, 0, n - 1, n);

    if (peakElement != -1) {
        printf("A peak element in the array: %d\n", peakElement);
    } else {
        printf("No peak element found in the array.\n");
    }

    return 0;
}

