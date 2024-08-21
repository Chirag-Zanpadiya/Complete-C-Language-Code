#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int c = *ptr;
    printf("The address of the age is %u\n", &age);
    printf("The address of the age is %u\n", ptr);
    printf("The value of the age is %u\n", c);
    printf("The address of the age is %u\n", &(*ptr));
    printf("The address of the age is %u\n", &ptr);
    return 0;
}
