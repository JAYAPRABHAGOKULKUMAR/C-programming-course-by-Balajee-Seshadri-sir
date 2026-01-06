#include <stdio.h>

int main() {
    int n, last;

    scanf("%d", &n);
    last = n % 10;

    if (last % 2 == 0)
        printf("%d\n", n);
    else
        printf("%d\n", n - 1);

    return 0;
}
