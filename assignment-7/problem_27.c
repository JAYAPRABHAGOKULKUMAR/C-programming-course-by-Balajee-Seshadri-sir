/*Write a program to get two numbers from the user and print the HCF of those numbers. using the function name: disp_count_HCF2*/

#include <stdio.h>

void disp_count_sum14(int x);

int main()
{
    int x;
    disp_count_sum14(x);
}

void disp_count_sum14(int x)
{
    int i, n, sum, count = 0;

    for (i = 1; i < 100000; i++) {
        n = i;
        sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        if (sum == 14)
            count++;
    }
    printf("%d", count);
}
