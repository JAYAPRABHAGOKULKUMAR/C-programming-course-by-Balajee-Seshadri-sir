/*Write a program get number from user print the total number of single digit perfect square numbers in the number, using the function name: disp_single_digit_square*/


#include <stdio.h>

void disp_single_digit_prime(int x);

int main()
{
    int x;
    scanf("%d", &x);
    disp_single_digit_prime(x);
}

void disp_single_digit_prime(int x)
{
    int d, count = 0;

    while (x > 0) {
        d = x % 10;
        if (d == 2 || d == 3 || d == 5 || d == 7)
            count++;
        x /= 10;
    }
    printf("%d", count);
}
