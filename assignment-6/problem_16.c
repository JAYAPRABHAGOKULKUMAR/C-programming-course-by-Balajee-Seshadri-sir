/*# C Level 6 – Problem 16

## Problem Statement
Check whether a number is **Prime or Not Prime**.
*/
#include <stdio.h>

int main() {
    int n, i = 2, prime = 1;

    scanf("%d", &n);

    if (n <= 1)
        prime = 0;

    while (i <= n / 2) {
        if (n % i == 0) {
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
