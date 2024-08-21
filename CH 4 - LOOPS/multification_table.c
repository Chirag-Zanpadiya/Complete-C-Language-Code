// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter your number to find the multification table\n");
//     scanf("%d", &n);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number\n");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}