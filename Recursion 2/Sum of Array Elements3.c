#include <stdio.h>
int array(int arr[], int size) {
    if (size == 0) {
        return 0;
    } else {
        return arr[0] + array(arr + 1, size - 1);
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = array(arr, size);
    printf("Sum of array elements: %d\n", sum);
    return 0;
}

