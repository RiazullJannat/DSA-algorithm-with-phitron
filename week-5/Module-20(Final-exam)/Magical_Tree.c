#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int row = 0;
    if (n == 1)
    {
        row = 6;
    }
    else
    {
        row = ((n - 1) / 2) + 6;
    }
    int gap = row - 1;
    int gap2 = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= gap; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        gap--;
    }
    for (int j = 0; j < gap2; j++)
    {
        for (int i = 0; i < gap2; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}