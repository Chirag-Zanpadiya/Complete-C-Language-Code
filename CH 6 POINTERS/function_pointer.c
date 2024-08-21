#include <stdio.h>
void squre(int *n);
int main()
{
    int n = 4;
    squre(&n);
    printf("The value of the numver is now %d\n", n);
    return 0;
}
void squre(int *n)
{
    *n = (*n) * (*n); // 4 *4;
    printf("Squre is %d\n", *n);
}