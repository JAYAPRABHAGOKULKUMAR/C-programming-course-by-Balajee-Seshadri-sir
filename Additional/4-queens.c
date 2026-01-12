#include <stdio.h>
#include <stdlib.h>

int board[4][4] = {0};

int isSafe(int row, int col)
{
    for(int i = 0; i < 4; i++)
        if(board[row][i] || board[i][col])
            return 0;

    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            if(board[i][j] && abs(i - row) == abs(j - col))
                return 0;

    return 1;
}

void solve(int col)
{
    if(col == 4)
    {
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
                printf("%d ", board[i][j]);
            printf("\n");
        }
        printf("\n");
        return;
    }

    for(int row = 0; row < 4; row++)
    {
        if(isSafe(row, col))
        {
            board[row][col] = 1;
            solve(col + 1);
            board[row][col] = 0;
        }
    }
}

int main()
{
    solve(0);
    return 0;
}
