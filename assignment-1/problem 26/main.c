#include <stdio.h>

int main(void) {
    int num, a, b, c, d;
    scanf("%d", &num);

    a = num / 1000;
    b = (num / 100) % 10;
    c = (num / 10) % 10;
    d = num % 10;

    printf("%d\n", a*1000 + b*100 + d*10 + c);
    return 0;
}
