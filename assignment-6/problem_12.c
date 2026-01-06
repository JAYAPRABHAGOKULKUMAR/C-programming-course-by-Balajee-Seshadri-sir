/* # C Level 6 – Problem 12

## Problem Statement
Get a number from the user and print the **sum of all digits**.
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }

    printf("%d\n", sum);
    return 0;
}
