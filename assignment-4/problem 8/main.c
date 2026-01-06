#include <stdio.h>

int main()
{
    int x = 10, a, b;

loop:
    if (x < 100)
    {
        a = x / 10;
        b = x % 10;

        if ((x % 2 == 0) && (a + b == 6))
        {
            printf("%d\n", x);
        }

        x = x + 2;
        goto loop;
    }

    return 0;
}
