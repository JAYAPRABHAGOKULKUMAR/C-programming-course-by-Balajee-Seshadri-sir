#include <stdio.h>

void check_first_2digits_prime(int x)
{
    int last_two, i, flag = 0;
    last_two = x % 100;

    if (last_two <= 1)
        flag = 1;
    else
    {
        for (i = 2; i * i <= last_two; i++)
        {
            if (last_two % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    int n;
    scanf("%d", &n);
    check_first_2digits_prime(n);
    return 0;
}
