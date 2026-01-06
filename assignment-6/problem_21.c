/*# C Level 6 – Problem 21

## Problem Statement
Count the **number of odd digits** in a number.
*/

#include <stdio.h>

int main() {
    int n, digit, count = 0;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0)
            count++;
        n = n / 10;
    }

    printf("%d\n", count);
    return 0;
}
