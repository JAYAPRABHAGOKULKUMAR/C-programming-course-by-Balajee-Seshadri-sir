#include <stdio.h>

int main()
{
    int n, i = 2;

    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not Prime");
        return 0;
    }

loop:
    if (i < n)
    {
        if (n % i == 0)
        {
            printf("Not Prime");
            return 0;
        }
        i++;
        goto loop;
    }

    printf("Prime");
    return 0;
}
