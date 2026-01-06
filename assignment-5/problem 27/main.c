#include <stdio.h>

int main() {
    int i, n, sum, count = 0;

    for (i = 1; i < 100000; i++) {
        n = i;
        sum = 0;

        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }

        if (sum == 14)
            count++;
    }

    printf("%d\n", count);
    return 0;
}
