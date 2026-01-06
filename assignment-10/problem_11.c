/*Get a number string (up to 50 digits) and convert it to an integer array*/
#include <stdio.h>

int main()
{
    char s[51];
    int a[50], i = 0;

    scanf("%s", s);

    while(s[i] != '\0')
    {
        a[i] = s[i] - '0';
        i++;
    }

    for(int j = 0; j < i; j++)
        printf("%d ", a[j]);

    return 0;
}
