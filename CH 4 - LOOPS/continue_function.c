#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        // printf("%d).\n", i);
        if (i == 6)
        {
            continue;
        }
        printf("%d).\n", i);
    }
    return 0;
}