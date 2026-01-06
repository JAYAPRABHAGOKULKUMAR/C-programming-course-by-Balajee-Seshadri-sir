/* Write a program to get a number from the user and print the reverse of that number using the function disp_reverse_number*/

#include <stdio.h>
int disp_reverse_number(int);
int main()
{
    int x, y;
    scanf("%d",&x);
    y = disp_reverse_number(x);
    printf("%d", y);
}
int disp_reverse_number(int a)
{
    int y = 0;
    while(a > 0)
    {
        y = y * 10 + (a % 10);
        a = a / 10;
    }
    return y;
}
