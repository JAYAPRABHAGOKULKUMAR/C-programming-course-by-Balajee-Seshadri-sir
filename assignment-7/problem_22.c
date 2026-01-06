/* Write a program get number from user print the total number of two digit odd numbers in the number. Use the function name: disp_total_2digit_odd

Input: 12345678 - Output: 3*/

#include <stdio.h>

void disp_total_2digit_odd(int x);

int main()
{
    int x;
    scanf("%d", &x);
    disp_total_2digit_odd(x);
}

void disp_total_2digit_odd(int x)
{
    int d1, d2, num, count = 0;

    while (x >= 10) {
        d1 = x % 10;
        d2 = (x / 10) % 10;
        num = d2 * 10 + d1;

        if (num % 2 != 0)
            count++;

        x /= 10;
    }
    printf("%d", count);
}
