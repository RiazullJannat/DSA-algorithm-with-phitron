#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, day;
        scanf("%d %d %d", &m1, &m2, &day);
        int result = round((m1 * day) / (m1 + m2));
        printf("%d\n", day-result);
    }
    return 0;
}