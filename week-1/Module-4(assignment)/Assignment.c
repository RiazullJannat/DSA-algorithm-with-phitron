#include <stdio.h>
int main()
{   
        // printf("Hello, world! I am learning C programming language. ^_^\n");
    // printf("Programming is fun and challenging. /\\/\\/\\ \n");
    // printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");
    // long long int a, b;
    // scanf("%lld %lld", &a, &b);
    // printf("%lld", a * b);
    // int n;
    // scanf("%d", &n);
    // if(n%3==0)
    // {
    //     printf("YES");
    // }
    // else
    // {
    //     printf("NO");
    // }
    // int n;
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i%3==0 && i%7==0)
    //     {
    //         /* code */
    //         printf("%d\n", i);
    //     }
    // }
    int n;
    scanf("%d", &n);
    if (n > 1000)
    {
        /* code */
        printf("I will buy Punjabi\n");
        if (n - 1000 >= 500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}