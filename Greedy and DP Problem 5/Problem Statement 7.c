#include <stdio.h>
void findMinCoins(int coins[], int n, int value) {
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        int numCoins = value / coins[i];

        count += numCoins;

        value -= numCoins * coins[i];

        printf("%d coins of denomination %d\n", numCoins, coins[i]);
    }

    printf("Total number of coins needed: %d\n", count);
}

int main() {
    int coins[] = {1, 2, 5};
    int n = sizeof(coins) / sizeof(coins[0]);
    int value = 11;

    printf("Coins available: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", coins[i]);
    }
    printf("\n");

    printf("Target value: %d\n", value);

    printf("Greedy approach:\n");
    findMinCoins(coins, n, value);

    return 0;
}

