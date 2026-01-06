/*Write a program to get two nubers from user and print the HCF of those numbers, use the function name: disp_count_HCF2 */


#include <stdio.h>

void disp_two_digit_square(int x);

int main()
{
    int x;
    scanf("%d", &x);
    disp_two_digit_square(x);
}

void disp_two_digit_square(int x)
{
    int d1, d2, num, count = 0;

    while (x >= 10) {
        d1 = x % 10;
        d2 = (x / 10) % 10;
        num = d2 * 10 + d1;

        if (num == 16 || num == 25 || num == 36 ||
            num == 49 || num == 64 || num == 81)
            count++;

        x /= 10;
    }
    printf("%d", count);
}
