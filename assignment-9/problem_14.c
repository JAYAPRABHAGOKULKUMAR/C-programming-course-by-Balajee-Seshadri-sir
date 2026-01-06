/*Odd count → middle number
Even count → average of middle two*/
#include <stdio.h>

int main()
{
    int a[50], n, count = 0;

    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        a[count++] = n;
    }

    if(count % 2 != 0)
        printf("%d", a[count / 2]);
    else
        printf("%d", (a[count/2 - 1] + a[count/2]) / 2);

    return 0;
}
