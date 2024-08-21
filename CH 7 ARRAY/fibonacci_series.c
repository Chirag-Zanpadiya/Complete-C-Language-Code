// most imp
#include <stdio.h>
// most imt
int main()
{
    int n;
    printf("Enter your number to know the fibonacci(n>2) series\n");
    scanf("%d", &n);
    int fib[n];
    fib[1] = 1;
    fib[0] = 0;
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\t", fib[i]);
    }

    return 0;
}

