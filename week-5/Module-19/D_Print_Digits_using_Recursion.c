#include <stdio.h>
void rec(int n)
{
    if (n == 0)
    {
        return;
    }
    rec(n / 10);
    int last = n % 10;
    printf("%d ", last);
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
        {
            printf("0");
        }
        
        rec(array[i]);
        printf("\n");
    }
    return 0;
}