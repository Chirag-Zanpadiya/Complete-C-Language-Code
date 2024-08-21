#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    printf("The value of the age is %d\n", age);
    printf("The value of the age is %d\n", *ptr);
    printf("The value of the age is %d\n", *(&age));

    return 0;
}
// The value of the age is 22
// The value of the age is 22
// The value of the age is 22      