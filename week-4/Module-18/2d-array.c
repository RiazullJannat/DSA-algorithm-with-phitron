#include <stdio.h>
int main()
{
    // declare 2d array;
    int row, col;
    scanf("%d %d", &row, &col);
    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    // printing 2d array;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}