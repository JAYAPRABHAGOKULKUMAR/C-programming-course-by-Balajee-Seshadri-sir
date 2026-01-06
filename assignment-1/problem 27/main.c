#include <stdio.h>

int main(void) {
    int num, a, b;
    scanf("%d", &num);

    a = num / 10;
    b = num % 10;

    printf("%d\n", a + b);
    return 0;
}
