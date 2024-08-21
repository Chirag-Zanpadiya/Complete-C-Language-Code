#include <stdio.h>

int main()
{
  long long  int n;
    printf("Enter your nubmer :-\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }
    else
    {
        printf("%d is odd\n", n);
    }

    return 0;
}