#include <stdio.h>
int main()
{
    // 1. First 10 Natural Numbers Display

    // for(int i=1; i<=10; i++)
    // {
    //     printf("%d\n", i);
    // }
    // 2. Sum of First 10 Natural Numbers
    // int sum=0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     sum+=i;
    // }
    // printf("Sum is = %d", sum);
    // 3. Display n Terms of Natural Numbers and Their Sum
    // int input, sum = 0;
    // scanf("%d", &input);
    // printf("The first %d natural number is :\n",input);
    // for (int i = 1; i <= input; i++)
    // {
    //     sum += i;
    //     printf("%d ",i);
    // }
    // printf("\nThe Sum of Natural Number up to %d terms : %d", input, sum);
    // check even odd;
    // for (int i = 1; i<=100; i++){
    //     if (i%2==0)
    //     {
    //         /* code */
    //         printf("%d is Even.\n", i);
    //     }
    //     else
    //     {
    //         printf("%d is Odd.\n", i);
    //     }
    // }
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
}