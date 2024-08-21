// #include <stdio.h>

// int main()
// {
//     int a, b;

//     printf("Enter your first number:-");
//     scanf("%d", &a);
//     printf("Enter your second number:-");
//     scanf("%d", &b);
//     if (a < b)
//     {
//         printf("%d is small\n", a);
//     }
//     else
//     {
//         printf("%d is small\n", b);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter your three values\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d ia max\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is max\n", b);
    }
    else
    {

        printf("%d is max\n", c);
    }
    return 0;
}