/*Convert an integer array (digits) into a character array and print using %s*/
#include <stdio.h>

int main()
{
    int a[50], n, i;
    char s[51];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s[i] = a[i] + '0';
    }

    s[i] = '\0';

    printf("%s", s);

    return 0;
}
