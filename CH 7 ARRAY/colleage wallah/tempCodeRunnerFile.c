#include <stdio.h>

int main()
{
    int n;
    int max = 0; //
    printf("Enter your size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Max :%d", max);

    return 0;
}