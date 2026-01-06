/*Write a loop program to print the sum of two digit odd numbers whose ten's digit is 7 using the function name: disp_2digit_odd_sum_tens7*/

#include <stdio.h>
int disp_2digit_odd_sum_tens7(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y = disp_2digit_odd_sum_tens7(x);
    printf("%d", y);
}
int disp_2digit_odd_sum_tens7(int a)
{
    int i, y = 0;
    for(i = 71; i <= 79; i = i + 2)
        y = y + i;
    return y;
}
