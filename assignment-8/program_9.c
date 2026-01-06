/*If the last digit is even the output should be the same number, if the last digit is odd number subtract 1 from the last digit*/

#include <stdio.h>
int check_last_digit_odd(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = check_last_digit_odd(x);
    printf("%d",y);
}
int check_last_digit_odd(int a)
{
    int last;
    last = a % 10;
    if(last % 2 != 0)
        a = a - 1;
    return a;
}
