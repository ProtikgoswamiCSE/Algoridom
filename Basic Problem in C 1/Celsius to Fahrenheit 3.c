#include <stdio.h>
int main(){
    double temperature;
    int choice;

    printf("Enter temperature: ");
    scanf("%lf", &temperature);
    printf("\n\nChoose conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("\n\nEnter your choice Number (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Convert Celsius to Fahrenheit
        temperature = (temperature * 9 / 5) + 32;
        printf("\nFahrenheit: %.2f\n", temperature);
    } else if (choice == 2) {
        // Convert Fahrenheit to Celsius
        temperature = (temperature - 32) * 5 / 9;
        printf("\nCelsius: %.2f\n", temperature);
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}

