#include <stdio.h>

int main(void) {
    int num, a, c;
    scanf("%d", &num);

    a = num / 100;
    c = num % 10;

    printf("%d\n", num - ((a % 2) * (c % 2)) * 5);
    return 0;
}
