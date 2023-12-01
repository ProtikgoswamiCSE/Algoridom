#include <stdio.h>
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}
int main() {
    int base, exponent;
    printf("Enter the input number : ");
    scanf("%d", &base);

    printf("Enter the input number (a non-negative integer): ");
    scanf("%d", &exponent);
    if (exponent < 0) {
        printf("Error: input number should be a non-negative integer.\n");
    } else {
        int output = power(base, exponent);
        printf("%d raised the power of %d is %d\n", base, exponent, output);
    }
    return 0;
}
