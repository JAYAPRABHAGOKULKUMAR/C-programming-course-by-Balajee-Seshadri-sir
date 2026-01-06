/*Write a program to get a number from the user and print the sum of all the digits using the function disp_sum_all_digits*/

#include <stdio.h>
int disp_sum_all_digits(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y = disp_sum_all_digits(x);
    printf("%d", y);
}
int disp_sum_all_digits(int a)
{
    int y = 0;
    while(a > 0)
    {
        y = y + (a % 10);
        a = a / 10;
    }
    return y;
}
