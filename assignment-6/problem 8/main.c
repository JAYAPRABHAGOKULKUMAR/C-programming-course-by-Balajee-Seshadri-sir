#include <stdio.h>

int main() {
    int i = 10, sum;
    while (i < 100) {
        sum = (i / 10) + (i % 10);
        if (i % 2 == 0 && sum == 6) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
