#include <stdio.h>
#include <string.h>
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    } else {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        reverseString(str, start + 1, end - 1);
    }
}
int main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    int length = strlen(inputString);
    reverseString(inputString, 0, length - 1);
    printf("Reversed String: %s\n", inputString);

    return 0;
}
