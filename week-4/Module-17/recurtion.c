#include <stdio.h>
// recursive function.
void hello()
{
    printf("Hello\n");
    hello();
}
int main()
{
    printf("hi\n");
    hello();
    return 0;
}