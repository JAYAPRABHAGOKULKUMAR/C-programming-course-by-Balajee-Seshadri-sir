/*Get a string of numbers (up to 50 digits) and validate the number*/
#include <stdio.h>

int main()
{
    char s[51];
    int i = 0, valid = 1;

    scanf("%s", s);

    while(s[i] != '\0')
    {
        if(s[i] < '0' || s[i] > '9')
        {
            valid = 0;
            break;
        }
        i++;
    }

    if(valid)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
