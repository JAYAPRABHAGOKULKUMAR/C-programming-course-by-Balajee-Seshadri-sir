#include <stdio.h>

int main(void) {
    int num, t;
    scanf("%d", &num);

    t = (num / 10) % 10;
    printf("%d\n", num - (t % 2) * 5);
    return 0;
}
