#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 65)
    {
        printf("ALPHA\n");
        if (a < 97)
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}