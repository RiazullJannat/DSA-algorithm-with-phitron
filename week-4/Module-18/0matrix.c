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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("not zero matrix.");
    }
    else
    {
        printf("Zero matrix.");
    }
    return 0;
}