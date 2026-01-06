/*# C Level 6 – Problem 15

## Problem Statement
If the last digit is even, print the number.
If odd, subtract 1 from the last digit and print.
*/

#include <stdio.h>

int main() {
    int n, last;

    scanf("%d", &n);

    last = n % 10;

    if (last % 2 != 0)
        n = n - 1;

    printf("%d\n", n);
    return 0;
}
