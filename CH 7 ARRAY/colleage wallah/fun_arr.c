#include <stdio.h>
// void fun(int arr[]);
int main()
{
    int n;
    printf("Enter your size of the array\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = arr[i] + 10;
        }
        else if (i % 2 != 0)
        {
            arr[i] = arr[i] * 2;
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
// void fun(int arr[]){}
