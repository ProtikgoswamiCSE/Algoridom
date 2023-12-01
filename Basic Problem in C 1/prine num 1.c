#include <stdio.h>
int Prime(int num) {
    if (num <= 1) {
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
}
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (Prime(x)) {
        printf("\nAns :%d is a prime number.\n", x);
    } else {
        printf("\nAns :%d is not a prime number.\n", x);
    }

    return 0;
}
