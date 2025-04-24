#include <stdio.h>
#include <string.h>
int main()
{
    char input[10000];
    scanf("%s", &input);
    for (char i = 'a'; i <= 'z'; i++)
    {
        int count = 0;
        for (int j = 0; j < strlen(input); j++)
        {
            if (i == input[j])
            {
                count++;
            }
        }
        if (count>0)
        {
            printf("%c - %d\n", i, count);
        }
    }
    return 0;
}