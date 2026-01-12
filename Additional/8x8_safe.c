#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int board[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &board[i][j]);

    int r, c;
    scanf("%d %d", &r, &c);

    for(int j = 0; j < n; j++)
        if(board[r][j] == 1)
        {
            printf("Not safe");
            return 0;
        }

    for(int i = 0; i < n; i++)
        if(board[i][c] == 1)
        {
            printf("Not safe");
            return 0;
        }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(board[i][j] == 1 && abs(i - r) == abs(j - c))
            {
                printf("Not safe (diagonal)\n");
                return 0;
            }

    printf("is safe\n");
    return 0;
}
