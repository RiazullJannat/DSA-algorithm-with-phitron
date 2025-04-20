#include <stdio.h>
int main()
{
    // int arr[]= {1,2,3};
    int arr[5]={10};
    arr[3]=3;
    // printf("%d", arr[1]);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}