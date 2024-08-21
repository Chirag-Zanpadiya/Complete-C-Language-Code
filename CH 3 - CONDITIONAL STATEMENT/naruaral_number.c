#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number\n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("This is an natuaral number\n");
    }
    else
    {
        printf("It is not natuaral number\n");
    }
    return 0;
}