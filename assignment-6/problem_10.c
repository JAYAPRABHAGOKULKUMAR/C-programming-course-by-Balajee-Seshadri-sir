/*C-Level 6 - Problem 10
Write a loop program to print the sum of two digit odd numbers, whose ten's digit is 7.
*/

#include <stdio.h>

int main() {
    int i = 71, sum = 0;

    while (i <= 79) {
        sum = sum + i;
        i = i + 2;
    }

    printf("%d\n", sum);
    return 0;
}
