#include <stdio.h>

void check_last_digit_odd(int x)
{
    int temp = x;
    int last = x % 10;
    int digits = 0;
    int power = 1;
    int first, middle;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    for (int i = 1; i < digits; i++) {
        power *= 10;
    }

    first = x / power;        
    middle = x % power;    

    if (last % 2 != 0) {
        first = first - 1;
    }

    printf("%d\n", first * power + middle);
}

int main()
{
    int x;
    scanf("%d", &x);
    check_last_digit_odd(x);
    return 0;
}
