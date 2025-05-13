#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int array[row][col];
    // taking input;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int flag = 1;
    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i + j != row - 1 && array[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }
    else
    {
        printf("not secondary diagonal matrix.");
    }
    if (flag == 1)
    {
        printf("This is secondary diagonal matrix.\n");
    }
    else
    {
        printf("not secondary diagonal matrix.");
    }
    return 0;
}