#include <stdio.h>

int main()
{
    int n;
    printf("Enter your nubmer to find the number is divided by 2\n");
    scanf("%d", &n);
    // if (n % 2 == 0)
    // {
    //     printf("Number is divided by 2\n");
    // }
    // else
    //     printf("Number is not divided by 2\n");
    printf("%d", n % 2 == 0);
    return 0;
}
// any non zeroable value considered as true