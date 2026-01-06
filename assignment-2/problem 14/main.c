#include <stdio.h>

int main() {
    int num, first, last;

    scanf("%d", &num);

    first = num / 100;
    last = num % 100;

    printf("%d", first == last);
    return 0;
}
