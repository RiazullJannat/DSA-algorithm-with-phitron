#include <stdio.h>
int main()
{
    // int a, b;
    // scanf("%d %d", &a, &b);
    // if (a >= b)
    // {
    //     printf("Yes");
    // }
    // else
    // {
    //     printf("No");
    // }
    // int a,b;
    // scanf("%d %d", &a, &b);
    // if (a%b==0 || b%a==0)
    // {
    //     /* code */
    //     printf("Multiples");
    // }
    // else
    // {
    //     printf("No Multiples");
    // }
    
    int a;
    scanf("%d", &a);
    if((a/1000)%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}