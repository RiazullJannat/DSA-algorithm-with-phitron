#include <stdio.h>
int main()
{
    // Write a C program to accept two integers and check whether they are equal or not.
    /* int inp1, inp2;
    scanf("%d %d", &inp1, &inp2);
    if(inp1 == inp2)
    {
        printf("your entered numbers are equal.");
    }
    else
    {
        printf("Your entered numbers are not equal");
    } */
    //    Write a C program to check whether a given number is even or odd.
    // int inp1;
    // scanf("%d", &inp1);
    // if(inp1%2==0){
    //     printf("%d is even number.", inp1);
    // }
    // else{
    //     printf("%d is odd number", inp1);
    // }
    /*  int inp1;
     scanf("%d", &inp1);
     if(inp1<0){
         printf("%d number is negative.", inp1);
     }
     else{
         printf("%d number is positive.");
     } */
    //    Write a C program to find whether a given year is a leap year or not.
    /* int inp1;
    scanf("%d", &inp1);
    if (inp1 % 400 == 0 || inp1 % 100 == 0 || inp1 % 4 == 0)
    {
        printf("%d Year is a leap year.", inp1);
    }
    else
    {
        printf("%d Year is not a leap year.", inp1);
    } */
    //    Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
    //
    // Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
    int m, n;
    scanf("%d", &m);
    if(m>0)
    {
        n=1;
    }
    else if(m==0)
    {
        n=0;
    }
    else
    {
        n=-1;
    }
    printf("The value of n = %d", n);
}
