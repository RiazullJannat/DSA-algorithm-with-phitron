#include <stdio.h>
#include <string.h>
int main()
{
    char input[100000];
    scanf("%s", &input);
    int len = strlen(input);
    for (int i = 0; i < len; i++)
    {
        if (input[i] == ',')
        {
            printf(" ");
        }
        if (input[i] > 90)
        {
            printf("%c", input[i] - 32);
        }
        else if(input[i] < 91 && input[i] != ',')
        {
            printf("%c", input[i] + 32);
        }
    }
    return 0;
}