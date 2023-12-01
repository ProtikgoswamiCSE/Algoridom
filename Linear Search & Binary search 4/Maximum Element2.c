#include <stdio.h>
int main() {
    int x;

    printf("Enter the number of elements: ");
    scanf("%d", &x);
    int arr[x];
    printf("Enter %d integers:\n", x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < x; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum element in the array: %d\n", max);

    return 0;
}
