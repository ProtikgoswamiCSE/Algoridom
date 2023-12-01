#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapshack(int capacity, int weights[], int values[], int n) {
    if (n == 0 || capacity == 0) {
        return 0;
    }


    if (weights[n - 1] > capacity) {
        return knapshack(capacity, weights, values, n - 1);
    }

        return max(
            values[n - 1] + knapshack(capacity - weights[n - 1], weights, values, n - 1),
            knapshack(capacity, weights, values, n - 1)
        );
    }


int main() {
    int n, capacity;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    int weights[n], values[n];

    printf("Enter the weights of the items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
    }

    printf("Enter the values of the items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    printf("Enter the capacity of the knapshack: ");
    scanf("%d", &capacity);

    int result = knapshack(capacity, weights, values, n);

    printf("The maximum value that can be obtained is: %d\n", result);

    return 0;
}
