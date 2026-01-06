/* Write  a program to print biggest 4 digit number which is divisible by 7 and 9 using the function name: disp_biggest_4digit_div7_9*/

#include <stdio.h>

void disp_biggest_4digit_div7_9(int x);

int main()
{
    int x;
    disp_biggest_4digit_div7_9(x);
}

void disp_biggest_4digit_div7_9(int x)
{
    int i;
    for (i = 9999; i >= 1000; i--) {
        if (i % 7 == 0 && i % 9 == 0) {
            printf("%d", i);
            break;
        }
    }
}
