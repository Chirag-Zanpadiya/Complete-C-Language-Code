#include <stdio.h>

int main()
{
    int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr = *ptr + 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;  // increment operators by 1..
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    return 0;
}