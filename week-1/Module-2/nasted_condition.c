#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("we'e going to coxes bazar....\n");
        if (tk >= 10000)
        {
            printf("we'e also going to sent martin....\n");
        }
        else
        {
            printf("coming back to home....\n");
        }
        return 0;
    }
    else
    {
        printf("not going any ware....");
    }
}