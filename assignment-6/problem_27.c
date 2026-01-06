/*# C Level 6 – Problem 27

## Problem Statement
Count numbers **less than 100000 whose sum of digits is 14**.
*/

#include <stdio.h>

int main() {
    int n = 1, temp, sum, count = 0;

    while (n < 100000) {
        temp = n;
        sum = 0;

        while (temp != 0) {
            sum += temp % 10;
            temp = temp / 10;
        }

        if (sum == 14)
            count++;

        n++;
    }

    printf("%d\n", count);
    return 0;
}
