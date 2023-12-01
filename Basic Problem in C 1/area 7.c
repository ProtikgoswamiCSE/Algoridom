#include <stdio.h>
int main() {
    double length, width, area, perimeter;

    // get user input
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // calculate the area
    area = length * width;
    perimeter = 2 * (length + width);

    // print the results
    printf("\n\nArea of the rectangle: %.2lf\n", area);
    printf("\nPerimeter of the rectangle: %.2lf\n", perimeter);
    return 0;
}
