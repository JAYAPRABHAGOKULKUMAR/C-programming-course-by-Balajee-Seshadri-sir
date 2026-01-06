#include <stdio.h>

int main()
{
    int x, d0, d1;
    scanf("%d", &x);

    d0 = x % 10;
    d1 = (x / 10) % 10;

    if ((d0 == d1) || (d0 != d1))
        printf("Success");
    else
        printf("Failure");

    return 0;
}
