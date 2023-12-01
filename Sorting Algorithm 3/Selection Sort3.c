#include <stdio.h>
#include <string.h>

void selectionSort(char arr[][50], int n) {
    int i, j, min;
    char temp[50];
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min]) < 0) {
                min = j;
            }
        }

        if (min != i) {
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min]);
            strcpy(arr[min], temp);
        }
    }
}

int main() {
    int n, i;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[n][50];
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }
    selectionSort(strings, n);

    printf("Sorted of strings in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

