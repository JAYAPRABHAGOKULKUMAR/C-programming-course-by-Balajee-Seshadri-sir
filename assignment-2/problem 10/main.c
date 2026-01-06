#include <stdio.h>

int main() {
    int num, d0, d1;

    scanf("%d", &num);

    d0 = num % 10;
    d1 = num / 10;

    printf("%d", d0 > d1);
    return 0;
}
