/*Get a string of numbers and remove all leading zeros*/
#include <stdio.h>

int main()
{
    char s[51];
    int i = 0;

    scanf("%s", s);

    while(s[i] == '0')
        i++;

    if(s[i] == '\0')
        printf("0");
    else
        printf("%s", &s[i]);

    return 0;
}
