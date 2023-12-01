
#include <stdio.h>

int main() {
    int x, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &x);

    int arr[x];

    printf("Enter %d integer:\n", x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Array sum are: %d\n", sum);

    return 0;
}
