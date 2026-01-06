/*# C Level 6 – Problem 23

## Problem Statement
Count the **single-digit perfect square numbers** in a number.
*/

#include <stdio.h>

int main() {
    int n, digit, count = 0;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        if (digit == 1 || digit == 4 || digit == 9)
            count++;
        n = n / 10;
    }

    printf("%d\n", count);
    return 0;
}
