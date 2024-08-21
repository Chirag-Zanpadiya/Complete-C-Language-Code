// fibonacci series with loops

#include <stdio.h>

int main()
{
    int n;
    int i;
    int a = 0, b = 1, c;
    printf("Enter your number to find the fibonacci series\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d,", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
