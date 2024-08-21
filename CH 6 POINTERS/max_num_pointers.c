// max number with the help of the pointer.
#include <stdio.h>
int max1(int a, int b, int *max);
int main()
{
    int a = 3, b = 5;
    int max;
    int min;
    max1(a, b, &max);
    printf(" The max = %d\n", max);

    return 0;
}
int max1(int a, int b, int *max)
{
    if (a > b)
    {
        *max = a;
    }
    else
    {
        *max = b;
    }
}

