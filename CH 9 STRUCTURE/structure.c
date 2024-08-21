// user define function hei ye
// use in the different data types
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
    struct student s1;
    // s1.name="chirag";

    s1.roll = 149;
    s1.spi = 8.95;
    strcpy(s1.name, "chirag");
    printf("Your roll no is %d\n", s1.roll);
    printf("Your spi no is %f\n", s1.spi);
    printf("Your name is %s\n", s1.name);

    return 0;
}