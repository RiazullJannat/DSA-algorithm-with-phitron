#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int star2 = n*2-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        star+=2;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i-1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star2; j++)
        {
            printf("*");
        }
        printf("\n");
        star2-=2;
    }

    return 0;
}