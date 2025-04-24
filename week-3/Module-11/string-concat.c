#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    // int len = strlen(b);
    // for (int i = 0, j = strlen(a); i < len; i++, j++)
    // {
    //     a[j] = b[i];
    // }
    // printf("%s", a);
    printf(strcat(a, b));
    return 0;
}
// build in function is strcat(); we can do the hole thin via the build in function.