/*# C Level 6 – Problem 24

## Problem Statement
Count the **two-digit perfect square numbers** formed in a number.
*/

#include <stdio.h>

int main() {
    int n, last, prev, num, count = 0;

    scanf("%d", &n);
    prev = n % 10;
    n = n / 10;

    while (n != 0) {
        last = n % 10;
        num = last * 10 + prev;
        if (num == 16 || num == 25 || num == 36 || num == 49 || num == 64 || num == 81)
            count++;
        prev = last;
        n = n / 10;
    }

    printf("%d\n", count);
    return 0;
}
