#include <stdio.h>
int main()
{
    int n, n_sum=0, p_sum=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            n_sum+=arr[i];
        }
        else
        {
            p_sum+=arr[i];
        }
    }
    printf("%d %d", p_sum, n_sum);
    
    return 0;
}