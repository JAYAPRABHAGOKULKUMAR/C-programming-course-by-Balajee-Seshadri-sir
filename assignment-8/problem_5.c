/*Write a program to get a number from the user print the total number of digits in that number using the function name: count_total_digits*/

#include <stdio.h>
int count_total_digits(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y = count_total_digits(x);
    printf("%d", y);
}
int count_total_digits(int a)
{
    int y = 0;
    while(a > 0)
    {
        y++;
        a = a / 10;
    }
    return y;
}
