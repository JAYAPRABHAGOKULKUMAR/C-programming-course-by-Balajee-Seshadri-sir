/*# C Level 6 – Problem 22

## Problem Statement
Count the **number of two-digit odd numbers** formed in the given number.
*/

#include <stdio.h>

int main() {
    int n, last, prev, count = 0;

    scanf("%d", &n);
    prev = n % 10;
    n = n / 10;

    while (n != 0) {
        last = n % 10;
        if ((last * 10 + prev) % 2 != 0)
            count++;
        prev = last;
        n = n / 10;
    }

    printf("%d\n", count);
    return 0;
}
