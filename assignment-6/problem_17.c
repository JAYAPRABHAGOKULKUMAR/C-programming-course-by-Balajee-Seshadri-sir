/*# C Level 6 – Problem 17

## Problem Statement
Check whether the number is **prime** and whether the **sum of digits is 14**.
*/

#include <stdio.h>

int main() {
    int n, temp, sum = 0, i = 2, prime = 1;

    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if (n <= 1)
        prime = 0;

    while (i <= n / 2) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
        i++;
    }

    if (prime && sum == 14)
        printf("Prime & sum of digits is 14\n");
    else if (!prime && sum == 14)
        printf("Not Prime but sum of digits is 14\n");
    else if (prime)
        printf("Prime & sum of digits is not 14\n");
    else
        printf("Not Prime & sum of digits is not 14\n");

    return 0;
}
