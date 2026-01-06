#include <stdio.h>

int main()
{
    int n = 10, t, u;

loop:
    if (n <= 99)
    {
        t = n / 10;
        u = n % 10;

        if (n % 2 == 0 && (t + u) == 6)
        {
            printf("%d\n", n);
        }

        n++;
        goto loop;
    }

    return 0;
}
