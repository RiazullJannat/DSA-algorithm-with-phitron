#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        long long int flag = -1;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        if (m == 0)
        {
            printf("0\n");
        }
        else
        {
            long long int sumof3 = a * b * c;
            if (sumof3 != 0 && m % sumof3 == 0)
            {
                flag = m / sumof3;
            }
            printf("%lld\n", flag);
        }
    }
    return 0;
}