#include <stdio.h>
#include <stdbool.h>

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
        bool flag = true; // we assume that arr is already sorted
        for (int j = 0; j <= n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}