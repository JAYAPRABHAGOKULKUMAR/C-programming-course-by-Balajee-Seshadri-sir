#include <stdio.h>

int main()
{
    int n, rev = 0, d;

    scanf("%d", &n);

loop:
    if (n != 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
        goto loop;
    }

    printf("%d", rev);
    return 0;
}
