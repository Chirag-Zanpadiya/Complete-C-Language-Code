#include <stdio.h>
void address(int x);
int main()
{
    int n = 4;

    address(n);
    printf("%d\n", &n);

    return 0;
}
void address(int x)
{
    printf("%d\n", &x);
}