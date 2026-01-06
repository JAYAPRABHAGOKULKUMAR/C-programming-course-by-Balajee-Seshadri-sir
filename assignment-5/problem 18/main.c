#include <stdio.h>

int main() {
    int n, firstTwo, i, prime = 1;

    scanf("%d", &n);
    firstTwo = (n / 10) % 100;

    for (i = 2; i <= firstTwo / 2; i++) {
        if (firstTwo % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
