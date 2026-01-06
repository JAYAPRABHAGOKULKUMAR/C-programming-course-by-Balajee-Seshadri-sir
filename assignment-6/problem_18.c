/*# C Level 6 – Problem 18

## Problem Statement
Check whether the **first two digits** of a number form a prime number.
*/

#include <stdio.h>

int main() {
    int n, firstTwo, i = 2, prime = 1;

    scanf("%d", &n);

    while (n >= 100)
        n = n / 10;

    firstTwo = n;

    if (firstTwo <= 1)
        prime = 0;

    while (i <= firstTwo / 2) {
        if (firstTwo % i == 0) {
            prime = 0;
            break;
        }
        i++;
    }

    if (prime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
