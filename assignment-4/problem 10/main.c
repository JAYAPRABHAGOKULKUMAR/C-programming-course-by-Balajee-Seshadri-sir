#include <stdio.h>

int main()
{
    int n = 70, sum = 0;

loop:
    if (n <= 79)
    {
        if (n % 2 != 0)
        {
            sum = sum + n;
        }
        n++;
        goto loop;
    }

    printf("%d\n", sum);
    return 0;
}
