#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < col; i++)
    {
        printf("%d ", array[row - 1][i]);
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == col - 1)
            {
                printf("%d ", array[i][j]);
            }
        }
    }
    return 0;
}