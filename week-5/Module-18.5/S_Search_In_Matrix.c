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
    int x;
    scanf("%d", &x);
    int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] == x)
            {
                flag = 0;
            }
            
        }
    }
    if (flag == 0)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    
    return 0;
}