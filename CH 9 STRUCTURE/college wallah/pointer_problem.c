#include <stdio.h>
typedef int* chirag;

int main()
{
    int a, b;
    chirag x = &a, y = &b; // int *x and int y;
    printf("%p\n",x);
    printf("%p\n",y);
    
    return 0;
}