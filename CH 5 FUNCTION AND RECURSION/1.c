#include <stdio.h>
void fib(int n);
int main()
{
    int n;
    printf("Enter your number to print fib :");
    scanf("%d", &n);
    fib(n);
    return 0;
}
void fib(int n)
{
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}