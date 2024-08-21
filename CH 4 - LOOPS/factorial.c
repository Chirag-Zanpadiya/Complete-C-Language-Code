// #include <stdio.h>

// int main()
// {
//     long long int fact = 1, i;
//     int n;
//     printf("Enter your number to find the factorial of the given number\n");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     printf("FACTORIAL  : %lld", fact);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    int lldfact = 1;
    printf("Enter your number\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        lldfact = lldfact * i;
    }
    printf("fact of the number is %d\n", lldfact);
    return 0;
}