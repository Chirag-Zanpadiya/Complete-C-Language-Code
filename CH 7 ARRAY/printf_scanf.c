#include <stdio.h>

int main()
{
    int marks[100];
    // int *ptr= &marks[0];
    int n;
    printf("Enter your required size of arr\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter your %d index\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", marks[i]);
    }

    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int a[10];
//     int *ptr = &a[0];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter for %d index \n", i);
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index is %d\n", i, a[i]);
//     }

//     return 0;
// }
