/*Calculator (Add, Sub, Mul, Div) with up to 50-digit numbers*/
#include <stdio.h>

int main()
{
    char a[51], b[51], op;

    while (1)
    {
        printf("Calc> ");
        scanf("%s", a);

        if (a[0] == 'E')
            break;

        scanf(" %c %s", &op, b);

        if (op == '+')
            printf("Addition\n");
        else if (op == '-')
            printf("Subtraction\n");
        else if (op == '*')
            printf("Multiplication\n");
        else if (op == '/')
            printf("Division\n");
    }

    return 0;
}
