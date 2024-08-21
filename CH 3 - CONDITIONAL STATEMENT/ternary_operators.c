#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number to check the number is odd or even\n");
    scanf("%d", &n);
    (n % 2 == 0) ? printf("This number is even\n") : printf("This number is odd\n");
    return 0;
}
