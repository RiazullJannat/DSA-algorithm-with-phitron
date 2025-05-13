#include <stdio.h>
void oneToN(int n, int i)
{
    if (i > n)
    {
        return;
    }
    oneToN(n,i+1);
    printf("%d ", i);
}
int main()
{
    int n, i=1;
    scanf("%d", &n);
    oneToN(n, i);
    return 0;
}