#include <stdio.h>

int main()
{
    int n, temp, first, last, pow = 1, result;

    scanf("%d", &n);

    temp = n;
    last = n % 10;

loop1:
    if (temp >= 10)
    {
        temp = temp / 10;
        pow = pow * 10;
        goto loop1;
    }

    first = temp;

    result = last * pow + (n % pow) / 10 * 10 + first;

    printf("%d", result);
    return 0;
}
