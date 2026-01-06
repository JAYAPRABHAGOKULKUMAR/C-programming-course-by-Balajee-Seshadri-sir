/*# C Level 5 – Problem 29

## Problem Statement
Write a program to get **three numbers** from the user and print the **LCM** of those numbers.
*/

#include <stdio.h>

int main() {
    int a, b, c;
    int lcm, max;

    scanf("%d %d %d", &a, &b, &c);

    /* Find the maximum of a, b, c */
    max = (a > b) ? a : b;
    max = (max > c) ? max : c;

    lcm = max;

    /* Find LCM */
    while (1) {
        if (lcm % a == 0 && lcm % b == 0 && lcm % c == 0) {
            printf("%d\n", lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
