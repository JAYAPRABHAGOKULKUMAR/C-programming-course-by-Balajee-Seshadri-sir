#include <stdio.h>

int main() {
    int i = 15, sum = 0;
    while (i <= 95) {
        sum = sum + i;
        i = i + 10;
    }
    printf("%d\n", sum);
    return 0;
}
