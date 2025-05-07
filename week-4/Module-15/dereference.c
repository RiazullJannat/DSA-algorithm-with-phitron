#include <stdio.h>
int main()
{
    int x = 10;
    int* ptr = &x;
    // we can access the value using the address;
    printf("%d", *ptr);


    // we can assign value suing pointer;
    *ptr = 200;
    printf("\n%d", *ptr);
    // or
    printf("\n%d", x);
    return 0;
}