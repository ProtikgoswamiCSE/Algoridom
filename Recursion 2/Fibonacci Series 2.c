#include <stdio.h>
unsigned long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        unsigned long long a = 0, b = 1, temp;
        for (int i = 2; i <= n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("The %dth number in the Fibonacci series is: %llu\n", n, fibonacci(n));
    }

    return 0;
}

