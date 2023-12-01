#include <stdio.h>

void insertionSort(float arr[], int n) {
    int i, j;
    float key;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float numbers[n];
    printf("Enter %d floating-point numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
    }
    insertionSort(numbers, n);
    printf("Sorted in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%2f ", numbers[i]);
    }

    return 0;
}
