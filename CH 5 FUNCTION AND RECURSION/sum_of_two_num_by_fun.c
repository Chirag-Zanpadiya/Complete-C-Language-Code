// #include <stdio.h>
// int sum(int a, int b);
// int main() // function prototype // function declaration
// {
//     int a, b;
//     printf("Enter your first number\n");
//     scanf("%d", &a);
//     printf("Enter your second number\n");
//     scanf("%d", &b); // function calling
//     sum(a, b); // here it is argument
//     sum(a, b);
//     return 0;
// }
// int sum(int x, int y) // this is a parameter
// {
//     printf("The sum %d + %d = %d\n", x, y, x + y); // function defination
//     return x + y;
// }
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("Enter your two vlaues\n");
    scanf("%d %d", &a, &b);
    printf("sum = %d\n", sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}