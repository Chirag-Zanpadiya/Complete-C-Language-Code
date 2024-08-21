// #include <stdio.h>

// int main()
// {
//     int a[100], n, i, max;
//     printf("Enter your value for required array\n");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d) = ", (i + 1));
//         scanf("%d", &a[i]);
//     }
//     max = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     printf("%d is max\n", max);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    printf("Enter your required size arr : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d is max ", max);
    return 0;
}

