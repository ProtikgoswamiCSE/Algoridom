#include <stdio.h>

int longestIncreasingSubsequence(int arr[], int n) {
    int lis[n];
    int max_length = 1;
    for (int i = 0; i < n; i++)
        lis[i] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
        }
        if (lis[i] > max_length)
            max_length = lis[i];
    }

    return max_length;
}

int main() {
    int arr[] = {10, 22, 9, 33, 22, 50, 60, 41, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    int length = longestIncreasingSubsequence(arr, n);

    printf("Length of Longest Increasing Subsequence: %d\n", length);

    return 0;
}

