/*Reverse each number, store in new array, print sum*/

#include <stdio.h>

int reverse(int n)
{
    int r = 0;
    while(n > 0)
    {
        r = r * 10 + (n % 10);
        n = n / 10;
    }
    return r;
}

int main()
{
    int a[5], b[5], i, sum = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
    {
        b[i] = reverse(a[i]);
        sum = sum + b[i];
    }

    printf("%d", sum);
    return 0;
}
