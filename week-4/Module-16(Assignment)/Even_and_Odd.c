#include <stdio.h>
void odd_even()
{
    int n, odd = 0, even = 0;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("%d %d", odd, even);
}
int main()
{
    odd_even();
    return 0;
}