#include <stdio.h>
int sumNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumNumbers(n - 1);
    }
}
int main() {
    int n;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error:\n");
    } else {
        int sum = sumNumbers(n);
        printf("Sum of the first %d numbers: %d\n", n, sum);
    }
    return 0;
}
