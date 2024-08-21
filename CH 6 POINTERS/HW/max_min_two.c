#include <stdio.h>
void max(int *a, int *b);
int main()
{
    int a = 50;
    int b = 10;
    max(&a, &b);
    // int s  = max();
    // printf("The max is %d\n",);
    return 0;
}
void max(int *a, int *b)
{
    if (*a > *b)
    {
        printf("The %d is max\n", *a);
    }
    else
    {
        printf("%d is max\n", *b);
    }
}