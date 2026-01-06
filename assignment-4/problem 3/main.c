#include <stdio.h>

int main()
{
    int x = 1, sum = 0;

loop:
    if (x <= 5)
    {
        sum = sum + x;
        x = x + 1;
        goto loop;
    }

    printf("%d\n", sum);
    return 0;
}
