// #include <stdio.h>
// void swap(int *x, int *y);
// int main()
// {
//     int a, b;
//     printf("Enter your first number\n");
//     scanf("%d", &a);
//     printf("Enter your second number\n");
//     scanf("%d", &b);
//     swap(&a, &b);
//     return 0;
// }
//  // call by the reference.
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
//     printf("The value of the x and y is %d and %d\n", *x, *y);
// }

// call by the value.
#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int a = 5;
    int b = 6;
    printf("The value of the a and b is before function callint is %d %d \n", a, b);
    swap(&a, &b);
    printf("The value of the x and y is after function calling %d %d\n", a, b);
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    // printf("The value of the x and y is %d %d\n", x, y);

} // argument copied are passed to the function
