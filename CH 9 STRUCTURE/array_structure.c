#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float spi;
};
int main()
{
    struct student ce[100];
    ce[0].roll = 149;
    ce[0].spi = 9.45;
    strcpy(ce[0].name, "chirag");

    printf("You name %s\n", ce[0].name);
    printf("You roll is %d\n", ce[0].roll);
    printf("You spi is %f\n", ce[0].spi);
    ce[1].roll = 148;
    ce[1].spi = 9.65;
    strcpy(ce[1].name, "yadav");
    printf("\n");
    printf("name : %s\n", ce[1].name);
    printf("your roll no is %d\n", ce[1].roll);
    printf("Your spi is %f\n", ce[1].spi);
    return 0;
}