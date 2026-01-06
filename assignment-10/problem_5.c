/*Get an integer and print it as a string*/
#include <stdio.h>

int main()
{
    int n, d, rev = 0;
    scanf("%d", &n);

    while(n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    while(rev > 0)
    {
        printf("%c", (rev % 10) + '0');
        rev = rev / 10;
    }

    return 0;
}
