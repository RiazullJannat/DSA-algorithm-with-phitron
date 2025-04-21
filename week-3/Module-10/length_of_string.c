#include <stdio.h>
int main()
{
    char name[101];
    scanf("%s", &name);
    // int i = 0, count=0;
    // while (name[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);

    return 0;
}