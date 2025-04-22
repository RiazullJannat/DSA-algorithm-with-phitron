#include <stdio.h>
int main()
{
    int range;
    scanf("%d", &range);
    int arr[range];
    for (int i = 0; i < range; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = range - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}