#include <stdio.h>

int main()
{
    int a = 22;
    int *ptr = &a;
    int **pptr = &ptr;
    printf("\n%d", *(&ptr));
    printf("\n%d",&a);
    printf("\n%d",*(&pptr));
    printf("\n%d",&ptr);


    return 0;
}