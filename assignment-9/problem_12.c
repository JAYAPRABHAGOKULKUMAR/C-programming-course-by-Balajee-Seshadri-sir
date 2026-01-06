/*Stop input at 0, print count and sum*/
#include <stdio.h>

int main()
{
    int a[50], n, count = 0, sum = 0;

    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        a[count++] = n;
        sum = sum + n;
    }

    printf("%d %d", count, sum);
    return 0;
}
