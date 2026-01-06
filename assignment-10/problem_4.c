/*Get a number as a string and print its integer value*/
#include <stdio.h>

int main()
{
    char s[50];
    int i = 0, num = 0;

    scanf("%s", s);

    while(s[i] != '\0')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    printf("%d", num);
    return 0;
}
