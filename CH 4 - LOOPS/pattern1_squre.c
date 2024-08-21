#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number to make pattern\n");
    scanf("%d", &n);
    for (int i = 1; i <= n - 1; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}