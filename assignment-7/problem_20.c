/*Write a program print total number of single digit prime numbers */

#include <stdio.h>

void count_primes(void) {
    int count = 0;

    for (int i = 2; i <= 10; i++) {
        int isPrime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    printf("%d\n", count);
}

int main() {
    count_primes();
    return 0;
}
