/*# C Level 6 – Problem 26

## Problem Statement
Print the **biggest 4-digit number divisible by 7 and 9**.
*/

#include <stdio.h>

int main() {
    int n = 9999;

    while (n >= 1000) {
        if (n % 7 == 0 && n % 9 == 0) {
            printf("%d\n", n);
            break;
        }
        n--;
    }

    return 0;
}
