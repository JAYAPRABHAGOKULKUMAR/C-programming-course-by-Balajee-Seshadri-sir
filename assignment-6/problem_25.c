/*# C Level 6 – Problem 25

## Problem Statement
Count the **single-digit prime numbers** in a number.
*/

#include <stdio.h>

int main() {
    int n, digit, count = 0;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            count++;
        n = n / 10;
    }

    printf("%d\n", count);
    return 0;
}
