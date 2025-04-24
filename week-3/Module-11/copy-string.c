#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int len = strlen(b);
    for (int i = 0; i <= len; i++)
    {
        a[i] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}
// build in function is strcpy(); we can do the hole thin via the build in function.