/*# C Level 6 – Problem 28

## Problem Statement
Find the **LCM of two numbers**.
*/

#include <stdio.h>

int main() {
    int a, b, max;

    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("%d\n", max);
            break;
        }
        max++;
    }

    return 0;
}
