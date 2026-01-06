#include <stdio.h>

int main()
{
    int n, sum = 0, d;

    scanf("%d", &n);

loop:
    if (n != 0)
    {
        d = n % 10;
        sum = sum + d;
        n = n / 10;
        goto loop;
    }

    printf("%d\n", sum);
    return 0;
}
