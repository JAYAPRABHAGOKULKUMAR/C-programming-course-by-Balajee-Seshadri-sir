#include <stdio.h>

int main(void) {
    int num, a, c;
    scanf("%d", &num);

    a = num / 100;
    c = num % 10;

    printf("%d\n", a*100 + c);
    return 0;
}
