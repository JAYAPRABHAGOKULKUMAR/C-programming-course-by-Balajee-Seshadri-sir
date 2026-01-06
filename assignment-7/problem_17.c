#include <stdio.h>

void check_prime_and_sum14(int x)
{
    int i, flag = 0, sum = 0, temp = x;
    if (x <= 1)
        flag = 1;
    else
    {
        for (i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (flag == 1 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (flag == 0 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & Sum of Digits is not 14");
}

int main()
{
    int n;
    scanf("%d", &n);
    check_prime_and_sum14(n);
    return 0;
}
