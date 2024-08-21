#include <stdio.h>

int main()
{
    int n;
    int sum[100];
    int b, c = 0;
    printf("Enter your number to find the sum\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter your %d number\n", i);
        scanf("%d", &sum[i]);

        b = c + sum[i];
        
    }
    printf("The sum of the total elements is %d\n", b);
    return 0;
}