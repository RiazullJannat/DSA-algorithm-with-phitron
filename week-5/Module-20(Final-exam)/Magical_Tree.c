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
        row = 5 + n - 2;
    }
    int gap = row-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j =1; j <= gap; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star+=2;
        gap--;
    }

    int gap = 5;
    return 0;
}