/* Write a program get number from user print the total number digits which are odd in the number, use the function name: disp_total_odd_digits

Input: 12345678 - Output: 4
Input:987531 - Output: 5S  */

#include <stdio.h>

void disp_total_odd_digits(int x);

int main()
{
    int x;
    scanf("%d", &x);
    disp_total_odd_digits(x);
}

void disp_total_odd_digits(int x)
{
    int d, count = 0;
    while (x > 0) {
        d = x % 10;
        if (d % 2 != 0)
            count++;
        x /= 10;
    }
    printf("%d", count);
}
