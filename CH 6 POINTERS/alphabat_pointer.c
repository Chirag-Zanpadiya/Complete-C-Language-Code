#include <stdio.h>

int main()
{
    char i = 'a';
    char j = 'z';
    char *x = &i;
    char *y = &j;
    for (char k = *x; k <= *y; k++)
    {
        printf("%c\n", k);
    }
    return 0;
}