#include <stdio.h>
int main()
{
    char name[45];
    // scanf("%s", &name);
    fgets(name, 45, stdin);
    printf("%s", name[40]);
    return 0;
}