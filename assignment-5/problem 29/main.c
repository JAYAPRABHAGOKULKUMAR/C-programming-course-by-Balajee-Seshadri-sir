#include <stdio.h>

int main() {
    int a, b, c, i, max;

    scanf("%d %d %d", &a, &b, &c);

    max = (a > b ? (a > c ? a : c) : (b > c ? b : c));

    for (i = max; ; i++) {
        if (i % a == 0 && i % b == 0 && i % c == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
