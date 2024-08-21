#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        if (i == 4)
        {
            break;
            // continue;
        }
        printf("%d\n", i);
    }
    printf("@@@ Ends @@@");
    return 0;
}
// break is used to exit from the loops
// continue is used to move next iteration