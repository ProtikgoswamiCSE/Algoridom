#include <stdio.h>
int countDigits(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return 1 + countDigits(n / 10);
    }
}
int main() {
    int number;
    printf("Enter a positive integer:");
    scanf("%d", &number);
    if (number < 0) {
        printf("Error:\n");
    } else {
        int digitCount = countDigits(number);
        printf("Number of digits: %d\n", digitCount);
    }
    return 0;
}
