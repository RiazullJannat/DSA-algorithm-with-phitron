#include <stdio.h>
long long int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long int val = factorial(n - 1);
    return val * n;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", factorial(n));
    return 0;
}
#include <stdio.h>
long long int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long int val = factorial(n - 1);
    return val * n;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", factorial(n));
    return 0;
}