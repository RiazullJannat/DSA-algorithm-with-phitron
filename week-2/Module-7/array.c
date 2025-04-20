#include <stdio.h>
int main()
{
    // int a[] = {1, 2, 3};
    // int a[3];
    // a[0]=10;
    // a[2]=20;
    // printf("%d", a[2]);
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    
    return 0;
}