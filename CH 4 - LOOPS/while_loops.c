#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter your number to print series of the number\n");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
