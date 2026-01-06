#include <stdio.h>

int main()
{
    int n, last, result;

    scanf("%d", &n);

    last = n % 10;

    if (last % 2 != 0)
        result = n - 1;
    else
        result = n;

    printf("%d", result);
    return 0;
}
