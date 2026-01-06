#include <stdio.h>

int main()
{
    int n, d = 2;

    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not Prime");
        return 0;
    }

check:
    if (d < n)
    {
        if (n % d == 0)
        {
            printf("Not Prime");
            return 0;
        }
        d++;
        goto check;
    }

    printf("Prime");
    return 0;
}
