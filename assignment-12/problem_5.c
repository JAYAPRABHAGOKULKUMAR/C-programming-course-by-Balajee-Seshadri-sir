/*Multiply two 50-digit numbers*/
#include <stdio.h>

void multiply(char *a, char *b, int *res)
{
    int la = 0, lb = 0, i, j;

    while (a[la]) la++;
    while (b[lb]) lb++;

    for (i = la - 1; i >= 0; i--)
    {
        for (j = lb - 1; j >= 0; j--)
        {
            res[i + j + 1] += (a[i] - '0') * (b[j] - '0');
            res[i + j] += res[i + j + 1] / 10;
            res[i + j + 1] %= 10;
        }
    }
}

int main()
{
    char a[51], b[51];
    int res[110] = {0}, i;

    scanf("%s %s", a, b);
    multiply(a, b, res);

    for (i = 0; i < 110 && res[i] == 0; i++);
    for (; i < 110; i++)
        printf("%d", res[i]);

    return 0;
}
