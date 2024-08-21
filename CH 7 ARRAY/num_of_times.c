#include <stdio.h>

int main()
{
    int a[100];
    int count = 1;
    int n;
    printf("Enter your value for required array\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d) = ", (i + 1));
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int n, m, i;
//     int a[100];
//     int c = 0;
//     printf("Enter the size of the arrray\n");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("%d)", (i + 1));
//         scanf("%d", &a[i]);
//     }

//     printf("Enter value for the particular measure\n");
//     scanf("%d", &m);
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == m)
//         {
//             c++;
//         }
//     }
//     printf("%d ", c);
//     return 0;
// }

