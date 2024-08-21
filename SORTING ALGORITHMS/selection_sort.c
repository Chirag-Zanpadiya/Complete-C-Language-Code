#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("Enter your size of the array : \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter your %d elements : \n ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j <= n - 1; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minidx = j;
            }
        }
        // swap two numbers
        int t;
        t = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = t;
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}