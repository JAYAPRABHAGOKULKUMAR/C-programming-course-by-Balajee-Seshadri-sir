#include <stdio.h>

int main()
{
    int n, count = 0;

    scanf("%d", &n);

loop:
    if (n != 0)
    {
        count++;
        n = n / 10;
        goto loop;
    }

    printf("%d\n", count);
    return 0;
}
