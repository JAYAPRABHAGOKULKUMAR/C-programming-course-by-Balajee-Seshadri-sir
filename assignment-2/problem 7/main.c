#include <stdio.h>

int main() {
    int x, a, b, y;
    scanf("%d", &x);

    a = x / 10;
    b = x % 10;
    y = (a == b);

    printf("%d", y);
    return 0;
}
