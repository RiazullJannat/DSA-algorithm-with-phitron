#include <stdio.h>
#include <limits.h>
int main()
{
    int range, num, max = INT_MIN;
    scanf("%d", &range);
    for (int i = 1; i <= range; i++)
    {
        scanf("%d", &num);
        if (num >= max)
        {
            max = num;
        }
    }
    printf("%d", max);
    return 0;
}