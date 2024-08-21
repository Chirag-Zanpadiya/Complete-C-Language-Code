//  to use library function header file must be included
#include <stdio.h>

#include <string.h>

int main()
{
    char s1[] = "chirag";
    char s2[] = "prashant";

    printf("The s1 becomes %s \n", strcpy(s1, s2));

    return 0;
}
