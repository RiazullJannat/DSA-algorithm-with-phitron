#include <stdio.h>
int main()
{
    int n, x, flag = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; i++)
        {
            if (arr[i] + arr[j] == x)
            {
                flag = 1;
                printf("Yes\n");
                printf("%d %d", arr[i], arr[j]);
            }
        }
    }
    if (flag == 0)
    {
        printf("NO");
    }

    return 0;
}