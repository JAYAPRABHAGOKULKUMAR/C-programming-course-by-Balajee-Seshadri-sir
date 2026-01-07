/*Find all positions of a character in a string*/
#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, pos = 0;

    scanf("%s", str);
    scanf(" %c", &ch);

    for (i = 0; str[i]; i++)
    {
        if (str[i] == ch)
            printf("%d ", i + 1);
    }

    return 0;
}
