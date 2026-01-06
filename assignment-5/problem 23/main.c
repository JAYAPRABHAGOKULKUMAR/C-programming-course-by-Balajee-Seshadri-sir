#include <stdio.h>

int main() {
    int n, count = 0, d;

    scanf("%d", &n);

    while (n != 0) {
        d = n % 10;
        if (d == 1 || d == 4 || d == 9)
            count++;
        n /= 10;
    }

    printf("%d\n", count);
    return 0;
}
