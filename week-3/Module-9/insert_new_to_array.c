#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);
    for (int i = n; i >= 0; i--)
    {
        arr[i]=arr[i-1];
        if(i==index){
            arr[index]=value;
            break;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}