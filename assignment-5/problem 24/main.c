#include <stdio.h>

int main() {
    int n, d, count = 0;

    scanf("%d", &n);

    while (n != 0) {
        d = n % 100;
        if (d == 16 || d == 25 || d == 36 || d == 49 || d == 64 || d == 81)
            count++;
        n = n / 10;
    }

    printf("%d\n", count);
    return 0;
}
