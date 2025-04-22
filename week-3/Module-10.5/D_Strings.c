#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], b[10];
    scanf("%s", &a);
    scanf("%s", &b);
    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s%s\n", a,b);
    char c=a[0];
    a[0]=b[0];
    b[0]=c;
    printf("%s %s", a,b);
    return 0;
}