// difference show by integers bytes.../
// when do diffence same datatype must be present in the programme
#include <stdio.h>

int main()
{
    int a = 23;
    int b = 24;

    int *ptr = &a;
    int *pptr = &b;
    printf("The defference between  %d - %d = %d\n", ptr, pptr, ptr - pptr);
    pptr = &a;
    printf("The comarision is %d\n", ptr == pptr);
    return 0;
}
