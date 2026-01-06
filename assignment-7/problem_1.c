/*# C Level 7 – Problem 1

## Problem Statement
Write a loop program to print numbers from **1 to 5**, one by one.

## Constraints
- Use only `int` variables
- Use only **decimal numbers**
- Use a **function with no return value**
- Do not use arrays, pointers, or strings
- Use a loop for repetition

## Function Name
disp_assend
*/
void disp_assend(void) {
    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
}

#include <stdio.h>
int main() {
    disp_assend();
    return 0;
}
