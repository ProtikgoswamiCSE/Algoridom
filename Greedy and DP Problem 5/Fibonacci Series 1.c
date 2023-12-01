#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    int* fiboArray = (int*)malloc((n + 1) * sizeof(int));

    fiboArray[0] = 0;
    fiboArray[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fiboArray[i] = fiboArray[i - 1] + fiboArray[i - 2];
    }
    int result = fiboArray[n];

    free(fiboArray);

    return result;
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
