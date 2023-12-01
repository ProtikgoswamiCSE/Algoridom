#include<stdio.h>
int countWays(int coins[], int m, int amount) {
    int table[amount + 1];
    table[0] = 1;

    for (int i = 0; i < m; i++)
        for (int j = coins[i]; j <= amount; j++)
            table[j] += table[j - coins[i]];

    return table[amount];
}

int main() {
    int coins[] = {1, 2, 5};
    int m = sizeof(coins) / sizeof(coins[0]);
    int amount = 5;

    int ways = countWays(coins, m, amount);

    printf("The number of ways to make change for %d is: %d\n", amount, ways);

    return 0;
}
