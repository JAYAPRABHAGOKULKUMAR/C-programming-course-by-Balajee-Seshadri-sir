#include <stdio.h>

int main()
{
    int x = 1;

loop:
    if (x <= 5)
    {
        printf("%d\n", x);
        x = x + 1;
        goto loop;
    }

    return 0;
}
