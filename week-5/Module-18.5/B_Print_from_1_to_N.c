#include <stdio.h>
void oneToN(int n, int i)
{
    if (i > n)
    {
        return;
    }
    printf("%d\n", i);
    oneToN(n,i+1);
}
int main()
{
    int n, i=1;
    scanf("%d", &n);
    oneToN(n, i);
    return 0;
}