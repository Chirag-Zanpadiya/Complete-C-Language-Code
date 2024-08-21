#include <stdio.h>

int main()
{
    int i = 0;
    int skip = 5;
    while (i < 10)
    {
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("%d", i);
        }
        i++;
    }
    return 0;
}