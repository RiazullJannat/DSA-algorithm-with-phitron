#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int size;
        scanf("%d", &size);
        int a[size], b[size], c[size];
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int j = 0; j < size; j++)
        {
            b[j] = a[j];
        }
        for (int j = 0; j < size - 1; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (b[j] > b[k])
                {
                    int temp = b[j];
                    b[j] = b[k];
                    b[k] = temp;
                }
                        }
        }
        for (int j = 0; j < size; j++)
        {
            c[j] = abs(a[j] - b[j]);
            printf("%d ", c[j]);
        }
        printf("\n");
    }

    return 0;
}