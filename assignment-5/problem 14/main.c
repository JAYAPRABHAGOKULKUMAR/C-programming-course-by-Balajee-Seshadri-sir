#include <stdio.h>

int main() {
    int n, first, last, middle, temp, pow = 1;
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        pow = pow * 10;
    }
    first = temp;
    middle = (n % pow) / 10;

    printf("%d\n", last * pow + middle * 10 + first);
    return 0;
}
