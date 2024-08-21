// pointer to pointer
#include <stdio.h>

int main()
{
    int a = 25;
    int *ptr = &a;
    int **pptr = &ptr;
    printf("The address of a is %d\n", &ptr);
    printf("%d\n", pptr);
    printf("The address of the ptr is %d\n", (&ptr));
    printf("The value of the a by poiter to pointer is %d\n", **(pptr));
    return 0;
}
