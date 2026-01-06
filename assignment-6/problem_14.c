/*# C Level 6 – Problem 14

## Problem Statement
Interchange the **first and last digits** of a number.
*/

#include <stdio.h>

int main() {
    int n, first, last, temp, pow = 1;

    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        pow = pow * 10;
    }

    first = temp;
    n = n - (first * pow) - last;
    n = n + (last * pow) + first;

    printf("%d\n", n);
    return 0;
}
