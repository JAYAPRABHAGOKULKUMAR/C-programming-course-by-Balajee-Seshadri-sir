/*Count words using gets() and pointers*/
#include <stdio.h>

int main()
{
    char str[200];
    int count = 0, i = 0;

    gets(str);

    while (str[i])
    {
        if ((i == 0 && str[i] != ' ') ||
            (str[i] != ' ' && str[i - 1] == ' '))
            count++;
        i++;
    }

    printf("%d", count);
    return 0;
}
