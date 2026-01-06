#include <stdio.h>

int main()
{
    int x, d1, d2;
    scanf("%d", &x);

    d1 = x / 10;
    d2 = x % 10;

    if (d1 != d2)
        printf("Success");
    else
        printf("Failure");

    return 0;
}
