#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter your size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("min is : %d", min);
    return 0;
}
