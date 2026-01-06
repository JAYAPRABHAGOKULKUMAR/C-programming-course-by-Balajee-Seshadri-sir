#include <stdio.h>

int main() {
    int n, count = 0, twoDigit;

    scanf("%d", &n);

    while (n >= 10) {
        twoDigit = n % 100;
        if (twoDigit % 2 != 0)
            count++;
        n /= 10;
    }

    printf("%d\n", count);
    return 0;
}
