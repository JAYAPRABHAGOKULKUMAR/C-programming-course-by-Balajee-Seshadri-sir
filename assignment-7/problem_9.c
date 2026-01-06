#include <stdio.h>

void disp_2digit_ones5(void) {
    int i = 10, sum = 0;

    while (i <= 99) {
        if (i % 10 == 5) {
            sum = sum + i;
        }
        i++;
    }

    printf("%d\n", sum);
}

int main() {
    disp_2digit_ones5();
    return 0;
}
