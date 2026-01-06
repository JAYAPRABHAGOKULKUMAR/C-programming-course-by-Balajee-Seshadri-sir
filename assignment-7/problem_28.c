#include <stdio.h>

void disp_LCM2(int x);

int main()
{
    int x;
    scanf("%d", &x);
    disp_LCM2(x);
}

void disp_LCM2(int x)
{
    int y, max;
    scanf("%d", &y);

    max = (x > y) ? x : y;

    while (1) {
        if (max % x == 0 && max % y == 0) {
            printf("%d", max);
            break;
        }
        max++;
    }
}
