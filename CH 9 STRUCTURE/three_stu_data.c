// good management and data
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
    s1.roll = 101;
    s1.spi = 9.85;
    strcpy(s1.name, "chirag");
    printf("Your roll no is : %d\n", s1.roll);
    printf("Your spi is : %f\n", s1.spi);
    printf("Name : %s\n", s1.name);
    printf("\n");
    struct student s2;
    s2.roll = 102;
    s2.spi = 8.85;
    strcpy(s2.name, "prashant");
    printf("Your roll no is : %d\n", s2.roll);
    printf("Your spi is : %f\n", s2.spi);
    printf("Name : %s\n", s2.name);
    printf("\n");
    struct student s3;
    s3.roll = 102;
    s3.spi = 8.85;
    strcpy(s3.name, "prashant");
    printf("Your roll no is : %d\n", s3.roll);
    printf("Your spi is : %f\n", s3.spi);
    printf("Name : %s\n", s3.name);
    return 0;
}
