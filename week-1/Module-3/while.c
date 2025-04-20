#include <stdio.h>
int main()
{
    // int i = 0;
    // while (i <= 100)
    // {
    //     printf("Hello i'm from while loop %d. \n", i);
    //     i++;
    // }
    // int i=0, sum=0;
    // while (i<11)
    // {
    //     sum+=i;
    //     i++;
    // }
    // printf("%d", sum);
    // int i=0, n, sum=0;
    // scanf("%d", &n);
    // while (i<=n)
    // {
    //     sum+=i;
    //     i++;
    // }
    // printf("%d", sum);
    // 4. Sum and Average of 10 Numbers from Keyboard
    int n, i = 1, sum = 0;
    while (i <= 10)
    {
        scanf("%d", &n);
        printf("Number is %d: %d\n",i, n);
        i++;
    }
}