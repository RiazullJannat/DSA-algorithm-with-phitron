#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int array[row][col];
    // taking input;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    int haveToPrint;
    scanf("%d", &haveToPrint);
    for (int i = 0; i < row; i++)
    {
        printf("%d ", array[i][haveToPrint]);
    }
    return 0;
}