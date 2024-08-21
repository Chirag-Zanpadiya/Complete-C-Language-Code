#include <stdio.h>
int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        arr[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter your size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your elements here\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, n);

    return 0;
}