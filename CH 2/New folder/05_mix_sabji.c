#include <stdio.h>

int main()
{
    int x;
    printf("Enter your number:-\n");
    scanf("%d", &x);
    if ((x > 9) && (x < 100))
    {
        printf("This is two digit nubmer\n");
    }
    else
    {

        printf("This isnot  two digit nubmer\n");
    }
    return 0;
}