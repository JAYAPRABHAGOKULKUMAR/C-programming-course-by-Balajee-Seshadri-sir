#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d\n", 10 + (num % 10));
    return 0;
}
