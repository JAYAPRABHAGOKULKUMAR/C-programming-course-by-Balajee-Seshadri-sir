/*Find substring position using pointers*/
#include <stdio.h>

int main()
{
    char str[100], sub[50];
    int i, j;

    scanf("%s", str);
    scanf("%s", sub);

    for (i = 0; str[i]; i++)
    {
        for (j = 0; sub[j]; j++)
        {
            if (str[i + j] != sub[j])
                break;
        }
        if (sub[j] == '\0')
        {
            printf("%d", i + 1);
            return 0;
        }
    }

    return 0;
}
