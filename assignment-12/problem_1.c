/*Add two numbers (up to 50 digits) using pointers*/
#include <stdio.h>

void getnumbers(char *a, char *b)
{
    scanf("%s %s", a, b);
}

void addnumbers(char *a, char *b, char *res)
{
    int i, j, k = 0, carry = 0;
    int la = 0, lb = 0;

    while (a[la]) la++;
    while (b[lb]) lb++;

    i = la - 1;
    j = lb - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        res[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    for (i = 0; i < k / 2; i++)
    {
        char t = res[i];
        res[i] = res[k - i - 1];
        res[k - i - 1] = t;
    }
    res[k] = '\0';
}

int main()
{
    char n1[51], n2[51], result[55];

    getnumbers(n1, n2);
    addnumbers(n1, n2, result);
    printf("%s", result);

    return 0;
}
