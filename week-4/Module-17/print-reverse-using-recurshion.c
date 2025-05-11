#include <stdio.h>
void printNumbers(int i, int n)
{
    if (i < n)
        return;
    printf("%d\n", i);
    printNumbers(i - 1, n);
}
int main()
{
    printNumbers(10, 1);
    return 0;
}