/*Remove prime numbers and create a new array*/
#include <stdio.h>

int isPrime(int n)
{
    int i;
    if(n < 2) return 0;
    for(i = 2; i * i <= n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int a[5], b[5], i, j = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
        if(!isPrime(a[i]))
            b[j++] = a[i];

    for(i = 0; i < j; i++)
        printf("%d ", b[i]);

    return 0;
}
