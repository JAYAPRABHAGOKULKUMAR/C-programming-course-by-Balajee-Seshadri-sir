#include <stdio.h>

int main(void) {
    int num, a, b;
    scanf("%d", &num);

    a = num / 10;
    b = num % 10;

    printf("%d\n", b * 10 + a);
    return 0;
}
