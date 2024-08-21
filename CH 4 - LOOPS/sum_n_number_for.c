#include <stdio.h>

int main()
{
    int sum = 0;
    int n, i;
    printf("Enter your number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    printf("The sum = %d", sum);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int i,j, sum = 0;
//     int n;
//     printf("Enter your number\n");
//     scanf("%d", &n);
//     for (i = 1, j = n; i <= n, j >= 1; i++, j--)
//     {
//         printf("%d).\n", j);
//         sum = sum + j;
//     }
//     printf("The sum is %d\n", sum);

//     return 0;
// }