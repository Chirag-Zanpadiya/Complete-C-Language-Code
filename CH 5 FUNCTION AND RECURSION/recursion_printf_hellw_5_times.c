#include <stdio.h>
void printhw(int n);
int main()
{
    printhw(10);
    return 0;
}
void printhw(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("Chirag is back\n");
    printhw(n - 1);
}