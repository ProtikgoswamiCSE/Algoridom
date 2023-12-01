#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next;
    // limit input
    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &n);

    printf("\nFibonacci series up to %d terms:\n", n);
     //   genarated to fibonacci serise
    for (int i = 0; i < n; i++) {
        printf("%d, ", first);

        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}

