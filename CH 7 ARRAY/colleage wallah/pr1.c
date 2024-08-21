#include <stdio.h>

int main()
{
    int n;
    printf("Enter your size of the arr\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}