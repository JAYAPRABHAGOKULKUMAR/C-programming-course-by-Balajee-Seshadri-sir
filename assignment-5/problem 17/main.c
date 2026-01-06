#include <stdio.h>

int main() {
    int n, temp, sum = 0, i, prime = 1;
    scanf("%d", &n);
    temp = n;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (prime && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (!prime && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (prime)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");

    return 0;
}