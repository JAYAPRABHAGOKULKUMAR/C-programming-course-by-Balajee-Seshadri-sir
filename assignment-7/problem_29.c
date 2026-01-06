#include <stdio.h>

void disp_LCM3(int x);

int main()
{
    int x;
    scanf("%d", &x);
    disp_LCM3(x);
}

void disp_LCM3(int x)
{
    int y, z, max;
    scanf("%d %d", &y, &z);

    max = x;
    if (y > max) max = y;
    if (z > max) max = z;

    while (1) {
        if (max % x == 0 && max % y == 0 && max % z == 0) {
            printf("%d", max);
            break;
        }
        max++;
    }
}
