#include <stdio.h>
void sum(int a, int b)
{
    printf("%d", a + b);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    sum(a, b);
    return 0;
}