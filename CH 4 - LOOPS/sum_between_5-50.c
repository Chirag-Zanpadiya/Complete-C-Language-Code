#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    for (i = 5; i <= 50; i++)
    {
        sum = sum + i;
    }
    printf("The sum between 5 to 55 is : %d\n", sum);

    return 0;
}