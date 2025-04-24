#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[10000];
        scanf("%s", &s);
        int capital = 0, small = 0, digits = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] < 58)
            {
                digits++;
            }
            else if (s[i] < 91)
            {
                capital++;
            }
            else
            {
                small++;
            }
        }
        printf("%d %d %d\n", capital, small, digits);
    }

    return 0;
}