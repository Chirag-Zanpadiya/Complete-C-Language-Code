#include <stdio.h>
void pa(int n);
int main()
{
    int n;
    printf("Enter your number to make pattern\n");
    scanf("%d", &n);
    pa(n);
    return 0;
}
void pa(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}