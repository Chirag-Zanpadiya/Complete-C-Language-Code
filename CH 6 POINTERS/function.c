#include <stdio.h>
void squre(int n);
int main()
{
    int n = 4;
    squre(n);
    printf("number is %d\n", n);
    return 0;
}
void squre(int n)
{
    n = n * n;
    // printf("The squre is %d\n", n);
}