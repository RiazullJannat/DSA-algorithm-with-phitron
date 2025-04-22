#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1000];
    scanf("%s", &arr);
    int len = strlen(arr);
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("NO");
            return 0;
        }
        
    }
    printf("YES");
    return 0;
}