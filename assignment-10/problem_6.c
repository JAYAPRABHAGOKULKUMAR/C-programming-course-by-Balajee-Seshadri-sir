/*Get an integer and print each digit as a character (one per line)*/
#include <stdio.h>

int main()
{
    char s[50];
    int i = 0;

    scanf("%s", s);

    while(s[i] != '\0')
    {
        printf("%c\n", s[i]);
        i++;
    }

    return 0;
}
