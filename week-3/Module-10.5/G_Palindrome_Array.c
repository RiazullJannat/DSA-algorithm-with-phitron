#include <stdio.h>
int main()
{
    int range;
    scanf("%d", &range);
    int arr[range];
    // taking input
    for (int i = 0; i < range; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0, j=range-1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    
    return 0;
}