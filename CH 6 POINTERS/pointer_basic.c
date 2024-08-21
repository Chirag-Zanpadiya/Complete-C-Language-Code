#include <stdio.h>

int main()
{
    int age = 18;
    int *ptr = &age;
    int age_1 = *ptr; // which stored the value present in the address of the ptr
    printf("The address of the age is  %d\n", &age);
    printf("The address of the age is %d\n", ptr);
     printf("The address of the age is %u\n", ptr);
    printf("The address of the ptr is  '%d'\n", &ptr);
    printf("The value which is stored at address is %d \n", age_1);
    printf("The value which is stored at address is %d \n", *ptr);

    return 0;
}
