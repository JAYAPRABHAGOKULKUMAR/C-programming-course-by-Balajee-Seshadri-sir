/*Get a number (up to 50 digits) and reverse it*/
#include <stdio.h>

int main()
{
    char s[51];
    int i = 0;

    scanf("%s", s);

    while(s[i] != '\0')
        i++;

    i = i - 1;
    while(i >= 0)
    {
        printf("%c", s[i]);
        i--;
    }

    return 0;
}
