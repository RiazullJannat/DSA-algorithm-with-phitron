#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n < 2)
        {
            printf("%d", -1);
            break;
        }
        else if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}