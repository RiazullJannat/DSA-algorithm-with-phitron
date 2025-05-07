#include <stdio.h>
int main()
{
    int array[] = {10, 20, 30, 40, 50};
    printf("%p\n", &array[0]);
    printf("%p\n", array);
    printf("%d\n", *array);
    *array = 100;
    printf("%d\n", array[0]);
    *(array+1) = 300;
    printf("%d", array[1]);    
    return 0;
}