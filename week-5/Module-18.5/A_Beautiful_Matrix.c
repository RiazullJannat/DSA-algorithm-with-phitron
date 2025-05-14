#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row = 5, col = 5;
    int result = 0;
    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] == 1)
            {
                int rowGap = abs(2 - i);
                int colGap = abs(2 - j);
                result = rowGap + colGap;
                break;
            }
        }
    }
    printf("%d", result);
    return 0;
}