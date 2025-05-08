#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        star += 2;
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star - 4; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        space++;
        star -= 2;
        printf("\n");
    }
    return 0;
}