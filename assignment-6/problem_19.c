/*# C Level 6 – Problem 19

## Problem Statement
Check whether the **middle two digits** (hundreds and tens) of a 4-digit number are prime.
*/

#include <stdio.h>

int main() {
    int n, mid, i = 2, prime = 1;

    scanf("%d", &n);

    mid = (n / 10) % 100;

    if (mid <= 1)
        prime = 0;

    while (i <= mid / 2) {
        if (mid % i == 0) {
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
