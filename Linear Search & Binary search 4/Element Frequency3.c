#include <stdio.h>
int main() {
    int x, target, frequency = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &x);

    int arr[x];

    printf("Enter %d integers:\n", x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);
    for (int i = 0; i < x; i++) {
        if (arr[i] == target) {
            frequency++;
        }
    }

    printf("Frequency of %d in the array: %d\n", target, frequency);

    return 0;
}

