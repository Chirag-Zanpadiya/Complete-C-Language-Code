// swaping of the two numbers with pointer.
#include <stdio.h>
int swap(int *a, int *b);
int main()
{
    int x, y;
    printf("Enter your first number\n");
    scanf("%d", &x);
    printf("Enter your first number\n");
    scanf("%d", &y);
    printf("THe value of the x and y is %d and %d before change\n",x,y);
    swap(&x, &y);
    printf("The value of the number after change is %d and %d\n", x, y);

    return 0;
}
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // printf("The value of the %d and %d\n", *a, *b);
}
// here we allow function to change it's original value because we pass the address of the varialble