#include <stdio.h>

int main()
{
    int n = 22;
    int *ptr = &n;
    printf("%p\n", &n);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
     printf("%u\n", &n);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);
    return 0;
}
