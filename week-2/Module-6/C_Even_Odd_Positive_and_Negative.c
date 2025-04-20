#include <stdio.h>
int main()
{
    int range, num, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &range);
    for (int i = 1; i <= range; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (num < 0)
        {
            negative++;
        }
        else if (num > 0)
        {
            positive++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);
    return 0;
}