#include <stdio.h>

int main(void) {
    int num, a, b;
    scanf("%d", &num);

    a = num / 10;
    b = num % 10;

    printf("%d\n", num - ((a + b) % 2) * 5);
    return 0;
}
