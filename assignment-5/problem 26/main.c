#include <stdio.h>

int main() {
    int i;

    for (i = 9999; i >= 1000; i--) {
        if (i % 63 == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
