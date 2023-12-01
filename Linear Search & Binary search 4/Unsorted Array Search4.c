#include <stdio.h>
int main() {
    int x, target, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &x);

    int arr[x];

    printf("Enter %d integers:\n", x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);
    for (int i = 0; i < x; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

