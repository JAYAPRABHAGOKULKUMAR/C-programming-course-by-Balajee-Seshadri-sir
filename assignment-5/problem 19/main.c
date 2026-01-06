#include <stdio.h>

int main() {
    int n, middle, i, prime = 1;

    scanf("%d", &n);
    middle = (n / 10) % 100;

    for (i = 2; i <= middle / 2; i++) {
        if (middle % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
