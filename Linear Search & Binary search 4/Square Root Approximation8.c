#include <stdio.h>
double squareRoot(double x, double epsilon) {
    if (x < 0) {
        printf("Cannot find square root of a negative number.\n");
        return -1.0;
    }

    double low = 0.0;
    double high = x;
    double mid, sqrGuess;
    while (high - low > epsilon) {
        mid = (low + high) / 2;
        sqrGuess = mid * mid;

        if (sqrGuess > x) {
            high = mid;
        } else {
            low = mid;
        }
    }

    return (low + high) / 2;
}

int main() {
    double number, precision;
    printf("Enter a positive number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    printf("Enter the precision for the square root approximation: ");
    scanf("%lf", &precision);
    double result = squareRoot(number, precision);
    printf("Square root of %.2f with precision %.6f: %.6f\n", number, precision, result);

    return 0;
}

