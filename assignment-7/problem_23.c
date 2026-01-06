/*Write a program get number from user print the total number of single digit perfect square numbers in the number.

Function name: disp_single_digit_square*/

#include <stdio.h>

void disp_single_digit_square(int x);

int main()
{
    int x;
    scanf("%d", &x);
    disp_single_digit_square(x);
}

void disp_single_digit_square(int x)
{
    int d, count = 0;

    while (x > 0) {
        d = x % 10;
        if (d == 1 || d == 4 || d == 9)
            count++;
        x /= 10;
    }
    printf("%d", count);
}
