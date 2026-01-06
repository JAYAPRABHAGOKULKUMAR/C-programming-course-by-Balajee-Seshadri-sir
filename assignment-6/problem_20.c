/*# C Level 6 – Problem 20

## Problem Statement
Print the **total number of single-digit prime numbers**.
*/

#include <stdio.h>

int main() {
    int count = 0, n = 2;

    while (n <= 9) {
        if (n == 2 || n == 3 || n == 5 || n == 7)
            count++;
        n++;
    }

    printf("%d\n", count);
    return 0;
}
