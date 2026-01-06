/*# C Level 6 – Problem 13

## Problem Statement
Get a number from the user and print the **reverse of that number**.
*/

#include <stdio.h>
int main() {
    int n, rev = 0;

    scanf("%d", &n);

    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    printf("%d\n", rev);
    return 0;
}
